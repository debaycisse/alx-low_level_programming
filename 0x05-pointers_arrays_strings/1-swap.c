#include "main.h"

/**
 * swap_int - swaps the values of two variables.
 * @a: to be swapped with the second value.
 * @b: to be swapped with the first value.
 *
 * Description: swaps the value of the first variable with that of the
 * second value and vice versa
 */
void swap_int(int *a, int *b)
{
	int swap = *b;
	*b = *a;
	*a = swap;
}
