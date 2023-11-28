#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int open_file[2](char **argv)
{
	char *file_from;
	char *file_to;
	int fds[2];

	file_from = argv[1];
	file_to = argv[2];
	fd[0] = open(file_from, O_RDONLY);
	fd[1] = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664); 

	return (fd)
}
