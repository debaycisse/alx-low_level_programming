#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

typedef struct format
{
	char format_op;
	char (*f)(char);
	void type;
} fmt;

void print_all(const char * const format, ...)
{
	fmt optrs[] = {
		{'c', print_char, char},
		{'i', print_int, int},
		{'f', print_float, float},
		{'s', print_string, char *}
	}

	while(i < 4)
	{
		if (optrs[i].format_op == format)
			optrs[i].f(va_arg(all_vars, optrs[i].type);
		i++;
	}

}
