#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*#include "main.h"*/

/**
 * main - Entry point of the program
 *
 * Description: This program displays a random number
 * and indicate if it positive, negative, or zero
 * Return: return o for success, 1 for error
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
}
