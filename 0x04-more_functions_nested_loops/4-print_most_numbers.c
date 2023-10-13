#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9, except 2 and 4
 *
 * Description: prints from 0 to 9, except 2 and 4 only
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		if (i == 57)
			_putchar('\n');
		i++;
	}
}
