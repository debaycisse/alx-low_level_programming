#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the given number whose factorial is to be returned
 *
 * Description: returns the factorial value of a given number
 * Return: the value of the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
