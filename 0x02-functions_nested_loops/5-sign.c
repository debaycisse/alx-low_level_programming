#include "main.h"

/**
 * print_sign - prints sign and return integer based on given integer
 * @n: the integer it takes as argument
 *
 * Description: checks if an integer is negative, 0, or positive
 * and returns 1, if positive, 0, if zero, and -1, if negative
 * Return: 0, 1, or -1
 */
int print_sign(int n)
{
	int result;

	if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	return (result);
}
