#include "main.h"

int _sqrt_number_compute(int n, int begin_from);
/**
 * _sqrt_recursion - computes the square root of a given number
 * @n: the number whose square root is to be computed
 *
 * Description: computes the square root of a number
 * Return: the value of the computed square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt_number_compute(n, 2));
}

/**
 * _sqrt_number_compute - computes square root finding computation
 * @n: the number whose square root is to be computed
 * @begin_from: the root to start from
 *
 * Return: a positive square root value, if n has a natural square root,
 * otherwise negative one (-1)
 */
int _sqrt_number_compute(int n, int begin_from)
{
	if (begin_from * begin_from > n)
		return (-1);
	else if (begin_from * begin_from == n)
		return (begin_from);
	else
		return (_sqrt_number_compute(n, ++begin_from));
}
