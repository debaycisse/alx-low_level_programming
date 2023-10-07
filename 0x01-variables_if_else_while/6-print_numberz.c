#include <stdio.h>

/**
 * main - entry point of the progran
 *
 * Description: prints all single digits in base 10.
 * Uses putchar, printf and puts are allowed
 * Return: return 0 for success execution
 */
int main(void)
{
	int single_digit = 48;

	while (single_digit <= 57)
	{
		putchar((char) single_digit);
		if (single_digit == 57)
			putchar('\n');
		single_digit++;
	}
	return (0);
}
