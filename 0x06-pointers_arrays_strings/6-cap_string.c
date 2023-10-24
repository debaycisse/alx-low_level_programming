#include <stdbool.h>
#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalize the first letter of every word.
 * @the_string: the location of the string to capitalize
 *
 * Description: capitalize every first letter of every word.
 * Return: the string location
 */
char *cap_string(char *the_string)
{
	char *the_string_cpy = the_string;
	int p[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	char letter;
	int len = 0;
	int i;
	int j;
	int k;
	bool found;

	while (*the_string_cpy != '\0')
	{
		len++;
		the_string_cpy++;
	}
	the_string_cpy = the_string;
	for (i = 0; i < len; i++)
	{
		if (i == 0 && isalpha(*the_string_cpy) > 0)
		{
			letter = (char) toupper(*the_string_cpy);
			*the_string_cpy = letter;
		}
		else
		{
			j = 13;
			k = 0;
			while (k < j)
			{
				if (*the_string_cpy == p[k])
					found = true;
				k++;
			}
			if (found == true)
			{
				the_string_cpy++;
				if (isalpha(*the_string_cpy) > 0)
				{
					letter = (char)  toupper(*the_string_cpy);
					*the_string_cpy = letter;
				}
				else
				{
					the_string_cpy++;
					letter = (char) toupper(*the_string_cpy);
					*the_string_cpy = letter;
				}
			}
		}
		the_string_cpy++;
		found = false;
	}
	*the_string_cpy = '\0';
	return (the_string);
}
