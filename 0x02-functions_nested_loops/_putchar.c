#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
