#include <stdio.h>

/**
 * main - entry point of this program
 *
 * Description: this program prints single digit numbers of base 10,
 * starting from 0
 * Return: returns 0 if no error while running
 */
int main(void)
{
	int single_digit = 0;

	while (single_digit <= 9)
	{
		printf("%d", single_digit);
		if (single_digit == 9)
			printf("%s", "\n");
		single_digit++;
	}
	return (0);
}
