#include "main.h"

/**
 * _memcpy - copies the bytes from src to dest
 * @dest: memory location to paste the bytes in src memory location
 * @src: memory location to copy the bytes from
 * @n: number of bytes to copy in src's memory location
 * Description: copies a n number of bytes from src pointer to dest pointer
 * Return: the dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
