#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a file and inserts the given content
 * @filename: the name to be given to the file
 * @text_content: the content to be inserted into the file
 *
 * Return: 1 on success, -1 on failure or error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_TRUNC | O_CREAT | O_RDWR, 0600);
	if (fd < 0)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		write(fd, (char *)text_content, strlen(text_content));
	close(fd);
	return (1);
}
