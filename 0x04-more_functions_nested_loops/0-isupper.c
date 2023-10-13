#include <ctype.h>

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
	int ret_v;

	if (isupper((char) + c))
		ret_v = 1;
	else
		ret_v = 0;
	return (ret_v);
}
