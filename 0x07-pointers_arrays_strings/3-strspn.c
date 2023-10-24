#include <stddef.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string whose specific substring's length is gotten
 * @accept: pointer to the set of characters
 * or string to be looked up in s pointer 
 * Description: gets the length of a specific substring in s that contains
 * all the characters in accept's pointer
 * Return: the length of the substring if found, otherwise 0 (zero)
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int from;
	int j;
	char *accept_cpy = NULL;
	unsigned int length = 0;
	int a;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == 32)
		{
			from++;
			for (a = from; a < i; a++)
			{
				j = 0;
				while (*(accept + j) != '\0')
				{
					if (*(accept + j) == *(s + (a - 1)))
					{
						*(accept_cpy + j) = *(accept + j);
						j++;
					}
					else
						j++;
				}

				if (sizeof(accept) == sizeof(accept_cpy))
				{
					length = (unsigned int) i - from;
					break;
				}
				from++;
			}
		}

		if (length > (unsigned int) 0)
			break;

		i++;
	}

	return (length);
}
