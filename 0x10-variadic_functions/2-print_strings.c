#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints all the string, given to it
 * @separator: string to use for separation between each string
 * @n: the total number of the given strings
 *
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list all_strings;
	char *str;

	va_start(all_strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(all_strings, char *);
		if ((i + 1 == n) || (separator == NULL))
			printf("%s", (str == NULL ? "(nil)" : str));
		else
			printf("%s%s", (str == NULL ? "(nil)" : str), separator);
	}
	va_end(all_strings);
	printf("\n");
}
