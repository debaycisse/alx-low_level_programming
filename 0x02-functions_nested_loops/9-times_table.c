#include "main.h"

void times_table(void)
{
	int number1 = 0;
	int number2;
	int displayed_n;
	int n_limit = 9;
	int d_digit1;
	int d_digit2;

	while (number1 <= n_limit)
	{
		number2 = 0;
		while (number2 <= n_limit)
		{
			displayed_n = number2 * number1;
			if (displayed_n > n_limit)
			{
				d_digit2 = displayed_n % 10;
				d_digit1 = (displayed_n - d_digit2) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + d_digit1);
				_putchar('0' + d_digit2);
			}
			else
			{
				if (number2 > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + displayed_n);
			}
			number2++;
		}
		_putchar('\n');
		number1++;
	}
}
