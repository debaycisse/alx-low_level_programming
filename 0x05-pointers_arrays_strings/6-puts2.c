#include <string.h>
#include "main.h"

/**
 * puts2 - prints every character of string
 * @str: string whose characters are printed
 *
 * Description: prints every character of a string, followed by an new line
 */
void puts2(char *str)
{
	int len = (int) strlen(str);
	int i = 0;

	do {
		_putchar(str[i]);
		i += 2;
	} while (i < len);
	_putchar('\n');
}
