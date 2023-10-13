#include "main.h"

/**
 * print_line - prints dash characters
 * @n: the number of dash characters to be printed
 *
 * Description: prints dash character in n times and newline
 * after the last dash
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar(10);
}
