#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string whose half is printed
 * Description: prints half of a string
 */
void puts_half(char *str)
{
	int len = (int) strlen(str);
	int _half = len / 2;
	int i;
	int j;

	if (len % 2 != 0)
		_half = (len - 1) / 2;
	j = _half;

	for (i = 0; i <= _half; i++)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
