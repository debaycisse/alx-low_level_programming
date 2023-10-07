#include <stdio.h>

/**
 * main - this is the main entry point into this program
 *
 * Description: it prints alphabet letters from a to z in lowercase
 * Return: it returns 0, if the program runs successfuly
 */
int main(void)
{
	char alphabet_letter = 'a';

	while (alphabet_letter <= 'z')
	{
		putchar(alphabet_letter);
		alphabet_letter++;
	}
	putchar('\n');
	return (0);
}
