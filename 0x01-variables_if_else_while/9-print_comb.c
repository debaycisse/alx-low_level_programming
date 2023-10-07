#include <stdio.h>

/**
 * main - entry point to the program
 *
 * Description: prints all single digit of base 10, seperated by comma and
 * single space. Add new line after the last single digit
 * Return: return 0 if runs successfully
 */
int main(void)
{
	int single_digit = 48;

	while (single_digit <= 57)
	{
		putchar((char) single_digit);
		if (!(single_digit == 57))
		{
			putchar((char) 44);
			putchar((char) 32);
		}
		else
			putchar('\n');
		single_digit++;
	}
	return (0);
}
