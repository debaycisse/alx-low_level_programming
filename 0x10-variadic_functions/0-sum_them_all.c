#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all - sums all its parameters
 * @n: the number of parameter, given to it
 *
 * Return: the sum of all the parameter, 0 if n's value is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;
	va_list each_number;

	if (n == 0)
		return (0);
	va_start(each_number, n);
	for (i = 0; i < (int) n; i++)
	{
		sum = sum + va_arg(each_number, int);
	}
	va_end(each_number);
	return (sum);
}
