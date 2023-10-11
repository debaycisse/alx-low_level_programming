#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints a last digit of an integer
 * @n: the parameter of the expected integer argument
 *
 * Description: prints and returns the last digist of a given integer
 * Return: returns the last digit of a given integer
 */
int print_last_digit(int n)
{
	int last_digit = abs(n) % 10;

	_putchar('0'+last_digit);
	return (last_digit);
}

