#include "main.h"

/**
 * main - tests positive_or_negative() function
 * Description: tests the function, called positive_or_negative()
 * with a value of 0.
 * Return: returns 0 if no error, otherwise 1
 */
int main(void)
{
	int given_case;

	given_case = 0;
	positive_or_negative(given_case);
	return (0);
}
