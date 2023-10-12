#include <ctype.h>
#include "main.h"

/**
 * _isupper - prints a given character and 1 if it is an uppercase
 * @c: the character to be checked
 *
 * Description: prints a given character and 1, if it is an uppercase
 * or 0 if it is not.
 * Return: returns 1 for an uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	int return_value;

	if (isupper(c))
		return_value = 1;
	else
		return_value = 0;
	return (return_value);
}
