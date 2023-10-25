#include "main.h"

/**
 * _print_rev_recursion - prints characters in reverse recursively
 * @s: pointer to the set of characters
 *
 * Description: displays a set of characters to the screen recursively
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else if (*s != '\n')
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
}
