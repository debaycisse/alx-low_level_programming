#include "main.h"

/**
 * _strncat - it is similar to _strcat
 * @dest: string that will be appended to
 * @src: string that will be appended
 * @n: number of n bytes that will be occupied
 *
 * Description: it appends src to dest and return dest
 * Return: the dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int src_len = 0;
	int dest_len = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		dest_len++;
		i++;
	}

	i = 0;

	while (src[i] != '\0')
	{
		src_len++;
		i++;
	}

	i = 0;

	while (i < n && i < src_len)
	{
		if (src[i] != '\0')
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		else
			i++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
