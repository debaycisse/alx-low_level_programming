#include "main.h"

/**
 * _strncpy - copies a given string
 * @dest: destination location to copy to
 * @src: source location, to copy from
 * @n: a number of byte of the string to be copied
 *
 * Description: copies string in src location to dest location
 * Return: the dest location pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		/*else
		{
			dest[i] = '\0';
			i++;
		}*/
	}
	dest[++i] = '\0';
	return (dest);
}
