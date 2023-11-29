#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - entry to the program
 * @argc: the number of all arguments, passed
 * @argv: the array of each passed argument
 * Return: 0, if no error, otherwise 1.
 */
int main(int argc, char **argv)
{
	char *file_from;
	char *file_to;
	int fd_from;
	int fd_to;
	char buffer[1024];
	int ch_read;
	int ch_wrote;
	int close_f_from;
	int close_f_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ch_read = read(fd_from, buffer, 1024);
	if ((strlen(file_from) == 0) || (ch_read < 0))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",\
		file_from);
		exit(98);
	}
	ch_wrote = write(fd_to, buffer, ch_read);
	if ((fd_to < 0) || (ch_wrote < 0))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	close_f_from = close(fd_from);
	close_f_to = close(fd_to);
	if (close_f_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_f_from);
		exit(100);
	}
	if (close_f_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_f_to);
		exit (100);
	}
	return (0);
}
