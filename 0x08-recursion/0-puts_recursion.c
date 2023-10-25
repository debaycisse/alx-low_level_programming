#include "main.h"

/**
 * _puts_recursion - recursively outputs each character of given pointer
 * @s: pointer to the characters
 *
 * Description: displays a set of characters to the standard output or screen
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
