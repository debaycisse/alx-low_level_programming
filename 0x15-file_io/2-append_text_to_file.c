#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text to a given file
 * @filename: filename's string (path to the file)
 * @text_content: the text that should be appended to the file
 *
 * Return: 1, on success, -1, on failure or error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_RDONLY);

	if (fd != -1)
	{
		close(fd);
		fd = open(filename, O_APPEND | O_RDWR);
		if (text_content != NULL)
			write(fd, text_content, strlen(text_content));
		close(fd);
		return (1);
	}
	if (fd == -1)
		return (-1);
	return (-1);
}
