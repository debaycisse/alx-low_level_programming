#include <ctype.h>

/**
 * _islower -checkes if a character is lowercase
 * @c: takes a character ascii number representation
 *
 * Description: checks if a character is lowercase or not
 * Return: 1, if lower, 0, if not
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
