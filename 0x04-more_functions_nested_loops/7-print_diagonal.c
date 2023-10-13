#include "main.h"

/**
 * print_diagonal - prints a backslash
 * @n: number of backslash to be printed
 *
 * Description: prints backslash and add space before the second
 * iteration and subsequent iterations.
 */
void print_diagonal(int n)
{
	int i;
	int nos;
	int j;

	if (n > 0)
	{
		i = 0;
		nos = 0;
		while (i < n)
		{
			if (i == 0)
			{
				_putchar((char) 92);
				_putchar((char) 10);
			}
			else
			{
				nos++;
				for (j = 0; j < nos; j++)
				{
					_putchar((char) 32);
				}
				_putchar((char) 92);
				_putchar((char) 10);
			}
			i++;
		}
	}
	else
		_putchar((char) 10);
}
