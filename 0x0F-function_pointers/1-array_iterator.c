#include <stddef.h>

/**
 * array_iterator - tranforms and prints eeach element of an array
 * @array: the array whose elements are transformed
 * @size: array's number of elements
 * @action: pointer to the function that transforms and prints each element
 *
 * Description: tranforms and prints each element of a given array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
