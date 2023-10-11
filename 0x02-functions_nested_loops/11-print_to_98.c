#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints any given number till 98
 * @n: the parameter to print and decrease or increase till 98
 *
 * Description: prints and decrease or increase a given number till 98
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", n);
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n--;
		}
	}

}
