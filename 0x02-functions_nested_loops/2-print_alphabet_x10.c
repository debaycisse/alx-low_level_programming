#include "main.h"
/**
 * print_alphabet_x10 - prints a to z 10x
 * @void: no parameter
 *
 * Description: prints from a to z 10 times
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int alph_letter;
	int itr_times = 0;

	while (itr_times < 10)
	{
		alph_letter = 97;
		while (alph_letter <= 122)
		{
			_putchar((char) alph_letter);
			if (alph_letter == 122)
				_putchar('\n');
			alph_letter++;
		}
		itr_times++;
	}
}
