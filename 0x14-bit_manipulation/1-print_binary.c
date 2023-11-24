#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n)
{
	int result;
	int msb = sizeof(n) * 4 - 1;
	
	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar(1 + '0');
	else
	{
		while ((n >> msb) == 0)
		{
			msb--;
		}
		printf("msb = %d for n = %lu\n", msb, n);

		while (msb >= 0)
		{
			result = n & 1;
			_putchar(result + '0');
			n = n >> 1;
			msb--;
		}
	}
}
