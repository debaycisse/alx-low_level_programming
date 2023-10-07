#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: this function prints alphabet
 * letters in reverse order
 * Return: returns 1 if programm runs successfully or 1, otherwise.
 */
int main(void)
{
	char alphabet_letter = 'z';

	while (alphabet_letter >= 'a')
	{
		putchar(alphabet_letter);
		if (alphabet_letter == 'a')
			putchar('\n');
		alphabet_letter--;
	}
	return (0);
}
