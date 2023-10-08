#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: prints all possible different combinations of two digits.
 * The two digitts must be different; 01 and 10 are the same.
 * The smallest of all the combinations must be the one to be printed.
 * The numbers must be printed in an ascending order.
 * Only putchar() is allowed to be used for print out.
 * Only a maximum of 5 putchar() is allowed.
 * Return: returns 0, if the program runs successfully.
 */
int main(void)
{
	int digit1;
	int digit2 = 48;
	int i;

	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		digit2++;
		for (i = digit2; i <= 57; i++)
		{
			putchar((char) digit1);
			putchar((char) i);
			if (!(digit1 == 56) && !(digit2 == 57))
			{
				putchar((char) 44);
				putchar((char) 32);
			}
			else
				putchar('\n');
		}
	}
	return (0);
}
