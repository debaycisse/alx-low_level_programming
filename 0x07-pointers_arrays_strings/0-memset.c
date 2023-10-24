#include "main.h"
/**
 * _memset - fills the first n bytes of the memory
 * @s: pointer to the memory location whose value spaces should be filled
 * @b: the character constant to be used in filling up the memory space
 * @n: number of memory space to be filled
 * Return: pointer to the filled memory space
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;

	}
	return (s);
}
