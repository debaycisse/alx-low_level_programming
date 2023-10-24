#include "main.h"

/**
 * reverse_array - reverses string
 * @a: pointer to the location where the string exists
 * @n: number of characters in the string
 *
 * Description: reverses string
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int size_e = n - 1;
	int *b = a + size_e;

	for (i = size_e; i > j; i--)
	{
		int temp_a = *a;
		*a = *b;
		*b = temp_a;
		b--;
		a++;
		j++;
	}
}
