#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: prints all possible different combinations of three digits.
 * The three digits must be different; 012, 021, 102, 120, 201, and  210 are
 * considered as the same.
 * The smallest of all the combinations must be the one to be printed.
 * The numbers must be printed in an ascending order.
 * Only putchar() is allowed to be used for print out.
 * Only a maximum of 6 putchar() are allowed.
 * Return: returns 0, if the program runs successfully.
 */
int main(void)
{
	int digit1;
	int digit2 = 48;
	int digit3 = 49;
	int i;
	int j;

	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		digit2++;
		for (i = digit2; i <= 57; i++)
		{
			digit3++;
			for (j = digit3; j <= 57; j++)
			{
				putchar((char) digit1);
				putchar((char) i);
				putchar((char) j);
				if (!(digit1 == 55) && !(digit2 == 56) && !(digit3 == 57))
				{
					putchar((char) 44);
					putchar((char) 32);
				}
				else
					putchar('\n');
			}
		}
	}
	return (0);
}
