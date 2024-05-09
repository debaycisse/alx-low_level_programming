#include "search_algos.h"

/**
 * interpolation_search - interpolation search implementation
 * @array: the array to search
 * @size: number of elements of the array
 * @value: the value to search for
 *
 * Description: searches for a value, using interpolation algorithm
 * Return: the index of the given value
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	size_t pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

	if (!array)
		return (-1);
	if (pos < size)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
	}
	if (pos >= size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	while (pos < size)
	{
		pos++;
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n",
					pos, array[pos]);
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
			return (pos);
	}
	return (-1);
}
