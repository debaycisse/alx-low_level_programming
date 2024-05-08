#include "search_algos.h"

/**
 * jump_search - searches for a given value via jump search algortihm
 * @array: pointer to the array, which should be searched
 * @size: the number of elements in the array
 * @value: the value that is to be looked up in the given array
 *
 * Description: searches for a given value in a given array,
 * using the Jump Search algorithm
 * Return: the index of the given value of -1, if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_size = abs(sqrt(size)), prev = 0;
	size_t current = jump_size - 1;

	while ((array[current] < (size_t)value) && (current < size))
	{
		
	}
}
