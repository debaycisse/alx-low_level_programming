#include <stdio.h>

/**
 * main - this is the entry to this program
 * 
 * Description: this program prints a to z,
 * both in lower and upper case.
 * Return: it returns zero if it successful, otherwise, it return 1
 */
int main (void)
{
	char alphabet_lower = 'a';
	char alphabet_upper = 'A';

	while (alphabet_lower <= 'z')
	{
		putchar(alphabet_lower);
		alphabet_lower++;
	}
	while (alphabet_upper <= 'Z')
	{
		putchar(alphabet_upper);
		alphabet_upper++;
	}
	putchar('\n');
	return (0);
}
