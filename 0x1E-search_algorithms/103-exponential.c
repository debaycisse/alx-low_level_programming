#include "search_algos.h"

/**
 * exponential_search - implementation of exponential search algorithm
 * @array: the array of elements to be search through.
 * @size: the number of elements in the array
 * @value: the given value to be searched for
 *
 * Description: searches for the given value in side the given array
 * Return: the index of the given value, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low = 0, high = 0, mid = 0, i = 0;
	size_t exp_jump = 0, prev_jump = 0;

	if (!array)
		return (-1);
	if (value <= array[0])
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		if (array[0] == value)
			return (0);
	}
	exp_jump = get_jump(array, size, value);
	prev_jump = get_prev_jump(array, size, value);
	printf("Value found between indexes [%ld] and [%ld]\n",
		prev_jump, exp_jump);
	low = prev_jump;
	high = exp_jump;
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

/**
 * get_jump - gets the exponential jump's size or value
 * @array: the array of elements to be searched
 * @size: the total number of elements in the array
 * @value: the given value that should be searched
 *
 * Return: the jump's value or size is returned or the
 * total size minus 1, if value is not found
 */
size_t get_jump(int *array, size_t size, int value)
{
	size_t exp_jump = 1;

	while ((exp_jump < size) && (array[exp_jump] < value))
	{
		printf("Value checked array[%ld] = [%d]\n",
			exp_jump, array[exp_jump]);
		exp_jump *= 2;
	}
	if (exp_jump >= size)
		exp_jump = size - 1;
	return (exp_jump);
}

/**
 * get_prev_jump - gets the previous jump's size or value
 * @array: the array of elements to be searched
 * @size: the total number of elements in the array
 * @value: the given value that should be searched
 *
 * Return: the previous jump's value or size
 */
size_t get_prev_jump(int *array, size_t size, int value)
{
	size_t exp_jump = 1, prev_jump = 0;

	while ((exp_jump < size) && (array[exp_jump] < value))
	{
		prev_jump = exp_jump;
		exp_jump *= 2;
	}
	return (prev_jump);
}
