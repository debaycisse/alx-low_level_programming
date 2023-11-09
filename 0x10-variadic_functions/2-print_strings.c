#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
  Write a function that prints strings, followed by a new line.

Prototype: void print_strings(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between the strings
and n is the number of strings passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
If one of the string is NULL, print (nil) instead
Print a new line at the end of your function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list all_strings;

	for (i = 0; i < n; i++)
	{
		
	}
	va_end(all_strings);
	printf("\n");
}
