#include <ctype.h>

/**
 * _isalpha - checks if a character is alphabet
 * @c: character to check
 *
 * Description:  checks if a character is alphabet
 * Return: 1 if alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
