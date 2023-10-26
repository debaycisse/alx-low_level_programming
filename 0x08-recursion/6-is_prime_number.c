#include "main.h"

int is_it_prime(int n, int begin_from);
/**
 * is_prime_number - checks if a number is a prime number or not
 * @n: the number to be checked
 *
 * Return: 1 if a number is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	int prime_flag;

	prime_flag = is_it_prime(n, 2);
	if (prime_flag == 1)
		return (1);
	else
		return (0);
}

/**
 * is_it_prime - checks if a number is prime or not
 * @n: the number to be checked
 * @begin_from: the root's value to start checking from
 *
 * Return: 1, if it is a prime number, 0 otherwise
 */
int is_it_prime(int n, int begin_from)
{
	if (n <= 0 || n == 1)
		return (0);
	if ((n % begin_from) == 0 && n > begin_from)
		return (0);
	if ((n % begin_from) == 0 && n == begin_from)
		return (1);
	return (is_it_prime(n, ++begin_from));
}
