#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: memory location to be searched up
 * @c: the character to be searched for
 * Description: searches for 'c' character in s pointer
 * Return: pointer to the first occurent of 'c' or null, if nothing found
 */
char *_strchr(char *s, char c)
{
	int len;
	int i;
	char *result;

	result = NULL;
	i = 0;
	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (*(s + i) == c)
		{
			result = s + i;
			break;
		}
		i++;
	}
	return (result);
}
