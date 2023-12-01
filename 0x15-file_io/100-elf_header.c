#include <elf.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * main - entry point to the program
 * @argc: stores the number of passed parameter
 * @argv: array of both program's name and the passed elf file
 *
 * Description: prints the header of a given elf file
 * Return: 0, if no error, else a value greater than 0 is returned
 */
int main(int argc, char **argv)
{
	int fd;
	int i;
	char elf_magic[4];
	int elf_magic_bytes;
	struct stat file_info;
	size_t file_size;
	void *elf_m;
	Elf64_Ehdr *elf_hdr;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_file_name\n", argv[0]);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		return (1);
	}
	elf_magic_bytes = read(fd, elf_magic, 4);
	if (elf_magic_bytes < 4)
	{
		dprintf(STDERR_FILENO, "Error: Can't read elf magic number\n");
		close(fd);
		return (1);
	}
	if (memcmp(elf_magic, "\x7f\x45\x4c\x46", 4) == 0)
	{
		fstat(fd, &file_info);
		file_size = file_info.st_size;
		elf_m = mmap(NULL, file_size, PROT_READ, MAP_PRIVATE, fd, 0);
		if (elf_m == MAP_FAILED)
		{
			dprintf(STDERR_FILENO, "Error: Can't map elf file\n");
			close(fd);
			return (1);
		}
		elf_hdr = (Elf64_Ehdr *) elf_m;
		printf("ELF Header:\n");
		printf("  Magic:   ");
		for (i = 0; i < EI_NIDENT; i++)
		{
			printf("%02x ", elf_hdr->e_ident[i]);
		}
		printf("\n");
		printf("  Class:\t\t\t     ELF%d\n", elf_hdr->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
		printf("  Data:\t\t\t\t     %s, little endian\n", elf_hdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement" : "2's complement, big endian");
		printf("  Version:\t\t\t     %d (current)\n", elf_hdr->e_ident[EI_VERSION]);
		printf("  OS/ABI:\t\t\t     %s\n", elf_hdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
		printf("  ABI Version:\t\t\t     %d\n", elf_hdr->e_ident[EI_ABIVERSION]);
		printf("  Type:\t\t\t\t     %s\n", elf_hdr->e_type == ET_DYN ? "DYN (Shared object file)" : "Other");
		printf("  Entry point address:\t\t     %#lx\n", elf_hdr->e_entry);
		munmap(elf_m, file_size);
		close(fd);
	}
	if (memcmp(elf_magic, "\x7f\x45\x4c\x46", 4) != 0)
	{
		dprintf(STDERR_FILENO, "Error: %s is not an elf file\n", argv[1]);
		close(fd);
		exit(98);
	}
	return (0);
}
