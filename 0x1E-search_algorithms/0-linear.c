#include "search_algos.h"

/**
 * linear_search - searches for a value, using a linear algorithm
 * @array: the array in which a value is searched for
 * @size: the number of elements in an array
 * @value: the whose index is to be looked for
 *
 * Description: searches for a value and returns the index of the value
 * Return: the index of a given value if the value exits, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
