#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: returns 0 if successfully executed.
 */
int main(void)
{
	int num_base_10 = 48;
	int num_base_16 = 97;

	while (num_base_10 <= 57)
	{
		putchar(num_base_10);
		num_base_10++;
	}
	while (num_base_16 <= 102)
	{
		putchar(num_base_16);
		if (num_base_16 == 102)
			putchar('\n');
		num_base_16++;
	}
	return (0);
}
