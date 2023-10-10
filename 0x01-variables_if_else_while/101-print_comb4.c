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
	int j;


	while (digit1 <= 57)
	{
		digit2 = 49;
		i = digit2;
		digit3 = 50;
		while (i <= 57)
		{
			j = digit3;
			while (j <= 57)
			{
				putchar((char) digit1);
				putchar((char) i);
				putchar((char) j);
				if (digit1 == 57 && i == 56)
				{
					putchar('\n');
				}
				else
				{
					putchar((char) 44);
					putchar((char) 32);
				}
				j++;
			}
			digit3++;
			i++;
		}
		digit2++;
		digit1++;
	}
	return (0);
}
