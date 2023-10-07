#include <stdio.h>

/**
 * main - this is the entrypoint of the program
 *
 * Description: this function prints a to z in lowercase
 * and it excludes both q and e
 * Return: it returns 0 to indicates success
 */
int main(void)
{
	char alphabet_letter = 'a';

	while (alphabet_letter <= 'z')
	{
		if (!(alphabet_letter == 'e') && !(alphabet_letter == 'q'))
			putchar(alphabet_letter);
		alphabet_letter++;
	}
	putchar('\n');
	return (0);
}
