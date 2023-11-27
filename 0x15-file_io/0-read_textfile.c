#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - reads a given textfile
 * @filename: pointer to the file that is given
 * @letters: the amount of byte to be printed
 * Return: total number of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_name;
	ssize_t ch_wrote;
	size_t ch_read;
	char *ch;

	file_name = open(filename, O_RDONLY);
	if ((file_name < 0) || (filename == NULL))
		return (0);
	ch = malloc(sizeof(ch) * letters);
	if (ch == NULL)
		return (0);
	ch_read = read(file_name, ch, letters);
	close(file_name);
	ch_wrote = write(STDOUT_FILENO, ch, ch_read);
	free(ch);
	if ((size_t)ch_wrote != ch_read)
		return (0);
	return (ch_wrote);
}
