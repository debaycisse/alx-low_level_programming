#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: pointer to the memory location of the array
 * @n: the size of the given array
 *
 * Description: prints array of number, seperated by comma, and followed by
 * space.
 */
void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		if (i+1 != n)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
