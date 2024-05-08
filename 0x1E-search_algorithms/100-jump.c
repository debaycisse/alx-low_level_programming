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
	size_t jump_size = (size_t)fabs(sqrt(size)), prev = 0;
	size_t current = jump_size;

	if (array == NULL)
		return (-1);
	if (value == array[0])
		return (0);
	printf("Value checked array[0] = [%d]\n", array[0]);
	while ((array[current] < value) && (current < size))
	{
		printf("Value checked array[%ld] = [%d]\n", current, array[current]);
		prev = current;
		current += jump_size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev, current);
	while ((prev <= current) && (prev < size))
	{
		if (array[prev] == value)
			return (prev);
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
	}
	return (-1);
}
