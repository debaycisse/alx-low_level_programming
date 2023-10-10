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
	int digit1 = 48;
	int digit2;
	int digit3;
	int i;

	while (digit1 <= 55)
	{
		digit2 = 49;
		while (digit2 <= 57)
		{
			digit3 = 50;
			i = digit3;
			while (i <= 57)
			{
				putchar((char) digit1);
				putchar((char) digit2);
				putchar((char) i);
				if (digit1 == 55 && digit2 == 56 && i == 57)
				{
					putchar('\n');
				}
				else
				{
					putchar((char) 44);
					putchar((char) 32);
				}
				i++;
			}
			digit3++;
			digit2++;
		}
		digit1++;
	}
	return (0);
}
