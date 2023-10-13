#include <ctype.h>

/**
 * _isdigit - checks if a given character is digit
 * @c: the character to be checked
 *
 * Description: checks if a given character is digit or not.
 * Return: 1, if digit, zero, otherwise
 */
int _isdigit(int c)
{
	int ret_v;

	if (isdigit(0 + c))
		ret_v = 1;
	else
		ret_v = 0;
	return (ret_v);
}
