#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 *
 * Description: takes a string, reverse it, and store at a mem. location
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int len = ((int) strlen(s)) - 1;
	char str;

	for (i = len; i >= 0; i--)
	{
		str = s[i];
		s[j] = str;
		j++;
	}
}
