#include "main.h"

/**
 * print_triangle - prints a triangle hsape, using # character
 * @size: specifies how many lines to make up the shape
 *
 * Description: prints a triangle shape, uisng # characters
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int num_of_hash;

	if (size <= 0)
		_putchar((char) 10);
	else
	{
		j = size;
		num_of_hash = 0;
		while (j > 0)
		{
			i = j;
			while (i > 1)
			{
				_putchar((char) 32);
				i--;
			}
			num_of_hash++;
			k = 0;
			while (num_of_hash > k)
			{
				_putchar((char) 35);
				k++;
			}
			_putchar((char) 10);
			j--;
		}
	}
}
