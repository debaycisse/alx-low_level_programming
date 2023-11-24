#include "main.h"

void print_binary(unsigned long int n)
{
	int i;
	int bit;
	int size = sizeof(n);

	for (i = size - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (n > 1)
		{
			_putchar(bit + '0');
		}
		else
		{
			if (i == 0)	
				_putchar(bit + '0');
		}
	}
}
