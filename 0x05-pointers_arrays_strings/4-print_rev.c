#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string parameter to reverse
 *
 * Description: prints a given string in a reverse order
 */
void print_rev(char *s)
{
	int len = (int) strlen(s);
	int i;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
