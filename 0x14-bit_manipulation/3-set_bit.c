#include "main.h"

/**
 * set_bit - replaces a bit at a given index with 1
 * @n: pointer to the integer whose bit is to be replaced
 * @index: location of the bit to be replaced
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n_decimal = *n;

	*n = (*n | (1 << index));
	if (*n > n_decimal)
		return (1);
	return (-1);
}
