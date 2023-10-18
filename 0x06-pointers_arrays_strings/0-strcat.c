#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: the destination string
 * @src: the source string
 *
 * Description: it appends the src string to that
 * of the dest string and return the dest string
 * Return: the dest string
 */
char *_strcat(char *dest, char *src)
{
	int src_len = 0;
	int dest_len = 0;
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
		src_len++;
	}
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
		dest_len++;
	}
	i = 0;
	while (i < src_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
