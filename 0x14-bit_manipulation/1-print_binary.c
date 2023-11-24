#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: the decimal number to be converted
 *
 */
void print_binary(unsigned long int n)
{
	int result;
	int msb;
	unsigned long int zero_eq = 0;

	if (n < zero_eq)
	{
		_putchar('-');
		_putchar('0');
		return;
	}
	msb = sizeof(n) * 4 - 1;
	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar(1 + '0');
	else if (n > 1)
	{
		while ((n >> msb) == 0)
		{
			msb--;
		}
		while (msb >= 0)
		{
			result = n & (1 << msb);
			if (result > 1)
				result = 1;
			_putchar(result + '0');
			msb--;
		}
	}
}
