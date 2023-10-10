#include "main.h"
/**
 * print_alphabet - prints a to z
 * @void: no parameter
 *
 * Description: prints from a to z
 * Return: no return
 */
void print_alphabet(void)
{
	int alph_letter = 97;

	while (alph_letter <= 122)
	{
		_putchar((char) alph_letter);
		if (alph_letter == 122)
			_putchar('\n');
		alph_letter++;

	}
}
