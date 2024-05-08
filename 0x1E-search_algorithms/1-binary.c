#include "search_algos.h"

/**
 * binary_search - searches via a binary search algorithm
 * @array: the array to be searched
 * @size: the length of the array or number of elements in the array
 * @value: the value whose index is to be obtained
 *
 * Description: searches for the index of a given value
 * in a given array
 * Return: the index of the given value if found or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, i = 0, mid = 0;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf(" %d\n", array[i]);
			else
				printf(" %d,", array[i]);
		}
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
