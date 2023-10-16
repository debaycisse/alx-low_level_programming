#include <string.h>
#include "main.h"

/**
 * _puts - prints a string, followed by new line
 * @s: the pointwr to the mem. loc. of the string
 *
 * Description: prints a string amd new line.
 */
void _puts(char *s)
{
	int i;
	int len = (int) strlen(s);

	for(i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
