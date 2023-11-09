#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints all numbers given to it as parameters
 * @separator: the separator between each number
 * @n: the number of all integers given to it
 *
 * Description: prints all given integers, separated by a given seperator
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list each_number;
	int i;

	if (separator == NULL)
		return;
	va_start(each_number, n);
	for (i = 0; i < (int) n; i++)
	{
		if (i + 1 == (int) n)
			printf("%i", va_arg(each_number, int));
		else
			printf("%i%s", va_arg(each_number, int), separator);
	}
	va_end(each_number);
	printf("\n");
}
