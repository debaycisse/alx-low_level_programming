#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: prints from 1 to 100, using FizzBuzz.
 * Instead of printing a number, it prints:
 * Fizz, if a number is divisible by 3,
 * Buzz, if it's divisible by 5,
 * FizzBuzz, if it's divisible by 3 and 5,
 * otherwise, the number itself.
 * Return: Always 0, if it runs successfully, 1, otherwise
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{	
			if (i % 3 == 0 && i % 5 == 0)
				printf("%s", "FizzBuzz");
			else if (i % 3 == 0)
				printf("%s", "Fizz");
			else if (i % 5 == 0)
				printf("%s", "Buzz");
			else
				printf("%d", i);
		}
		else
		{
			if (i % 3 == 0 && i % 5 == 0)
				printf("%s ", "FizzBuzz");
			else if (i % 3 == 0)
				printf("%s ", "Fizz");
			else if (i % 5 == 0)
				printf("%s ", "Buzz");
			else
				printf("%d ", i);
		}
	}
	putchar('\n');

	return (0);
}
