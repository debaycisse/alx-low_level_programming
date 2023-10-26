#include "main.h"

/**
 * _sqrt_recursion - computes the square root of a given number
 * @n: the number whose square root is computed
 *
 * Description: computes the square root of a number
 * Return: the value of the computed square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n / 2 < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt_recursion(n / 2));
	n--;
}
