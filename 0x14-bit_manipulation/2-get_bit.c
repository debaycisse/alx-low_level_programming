#include "main.h"

/**
 * get_bits - gets the bit at the given index location
 * @n: the binary number to get its bit
 * @index: value for the index location
 *
 * Return: the value that is found at the given index location
 * of the given decimal number's location
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_at_index;
	unsigned long int zero_eq = 0;

	if ((n < zero_eq) || (n == zero_eq))
		return (0);
	else if (n == 1)
		return (1);
	value_at_index = n & (1 << index);
	if (value_at_index >= 1)
		return (1);
	return (value_at_index);
}
