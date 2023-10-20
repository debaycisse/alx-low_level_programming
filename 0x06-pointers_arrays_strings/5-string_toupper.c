#include <ctype.h>
#include "main.h"

/**
 * string_toupper - converts string to upper case
 * @characters: pointer to the string
 *
 * Description: converts characters in a string to uppercase
 * Return: the uppercase version of the character
 */
char *string_toupper(char *characters)
{
	char letter;
	int len = 0;
	char *characters_cpy = characters;

	while (*characters_cpy != '\0')
	{
		characters_cpy++;
		len++;
	}
	
	characters_cpy = characters;
	
	while (len > 0)
	{
		letter = (char) toupper((int) *characters_cpy);
		*characters_cpy = letter;
		characters_cpy++;

		len--;
	}
	*characters_cpy = '\0';

	return (characters);
}
