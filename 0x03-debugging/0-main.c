#include "main.h"

/**
 * main - tests a function as mentioned in the below description
 *
 * Description: tests the function, called positive_or_negative()
 * with a value of 0. This function is supposed to print the given value with
 * an additional information on whether the given value is positive,
 * negative, or equal to zero.
 * Return: returns 0 if no error, otherwise 1
 */
int main(void)
{
	int given_case;

	given_case = 0;
	positive_or_negative(given_case);

	return (0);
}
