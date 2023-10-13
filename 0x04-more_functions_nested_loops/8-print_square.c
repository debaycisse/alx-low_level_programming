#include "main.h"

/**
 * print_square - print '#' or hash characters
 * @size: the number of hash characters to print
 *
 * Description: prints hash caracters in @size's times
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar((char) 10);
	else
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar((char) 35);
				j++;
			}
			_putchar((char) 10);
			i++;
		}
	}
}

