#include "main.h"

/**
 * clear_bit - sets a bit at a given index to zero
 * @n: pointer to the decimal whose bit is to be cleared or changed to zero
 * @index: the position of a bit to be cleared or set to zero
 *
 * Return: 1, if no error, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int original_bit = *n;
	int result;
	unsigned long int zero_eq = 0;

	if (*n == zero_eq)
		return (0);
	result = (*n | (1 << index));
	if (result >= 1)
		*n = *n ^ (1 << index);
	if (result == 0)
		*n = *n & (1 << index);
	if (original_bit > *n)
		return (1);
	return (-1);
}
