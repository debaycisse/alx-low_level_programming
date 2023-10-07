#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Description: This program displays the last figure of a random number
 * and indicate if it is greater than 5 or equalled to zero or less than zero
 * Requirement: displays the below based on the above stated conditions
 * if "greater than 5" -> and is greater than 5
 * if "equalled to zero" -> and is 0
 * if "less than 5" -> and is less than 6 and not 0
 * Lastly, followed by a new line
 * Return: return o for success, 1 for error
 */
int main(void)
{
	int n;
	int last_digit;
	char less_or_equal[30];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
		strcpy(less_or_equal, "is greater than 5");
	if (last_digit == 5)
		strcpy(less_or_equal, "is 5");
	else if (last_digit == 0)
		strcpy(less_or_equal, "is 0");
	else if (last_digit < 5)
		strcpy(less_or_equal, "is less than 6 and not 0");

	printf("Last digit of %d is %d and %s\n", n, last_digit, less_or_equal);
	return (0);
}
