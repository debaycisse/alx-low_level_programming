#include <string.h>
#include "main.h"
/**
 * _strcpy - copies string values to memory location
 * @dest: the memory address location
 * @src: the string whose values' memory locaton is copied
 *
 * Description: copies the string pointed to by src variable,
 * including the termination null byte(\0), to the the buffer,
 * pointed to by dest
 * Return: the memory location string
 */
char *_strcpy(char *dest, char *src)
{
	int len = (int) strlen(src);
	int i = 0;

	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
