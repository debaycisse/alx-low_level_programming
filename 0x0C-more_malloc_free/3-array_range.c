#include <stdlib.h>

/**
 * array_range - creates an integer array via a malloc function
 * @min: the integer to start from (it is inclusive).
 * @max: the integer to stop at (it is inclusive).
 *
 * Description: creates an integer array via a malloc function
 * and stores the integer from min to max, both inclusive
 * Return: the pointer to the array if no error, otherwise NULL
*/
int *array_range(int min, int max)
{
	int *arr_range;
	int i;
	int j;

	if (min > max)
		return (NULL);
	arr_range = malloc((max + 1) * sizeof(*arr_range));
	if (arr_range == NULL)
		return (NULL);
	for (j = 0, i = min; i <= max; j++, i++)
		arr_range[j] = i;
	return (arr_range);
}
