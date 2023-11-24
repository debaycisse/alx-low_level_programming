#include "main.h"

/**
 * flip_bits - flips and compares different bit between two numbers
 * @n: the first number whose binary is compared to
 * @m: the second number whose binary is compared with
 *
 * Description: compares and returns the number of bits, needed to be
 * flipped transform from one number to another number
 * Return: the number of bits required to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_count;
	int msb = sizeof(n) * 4 - 1;
	int i;
	unsigned long int check;
	unsigned long int compare = 1;

	while ((n >> msb) == 0)
	{
		msb--;
	}

	i = 0;
	bits_count = 0;
	while (msb >= 0)
	{
		check = ((n ^ m) & (compare << i));
		if (check > 0)
		{
			bits_count++;
			i++;
			msb--;
		}
		else
		{
			i++;
			msb--;
		}
	}
	return (bits_count);
}
