#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @ch: character to write
 * Return: the number of character, written to the output
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
