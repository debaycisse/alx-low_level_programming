#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * print_char - prints a character
 * @ch: the given character
 */
void print_char(char ch)
{
	printf("%c", ch);
}
/**
 * print_int - prints an integer
 * @num: the given integer
 */
void print_int(int num)
{
	printf("%i", num);
}
/**
 * print_float - prints a float
 * @num: the given float
 */
void print_float(float num)
{
	printf("%f", num);
}
/**
 * print_string - prints string
 * @str: the given string
 */
void print_string(char *str)
{
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
/**
 * print_all - prints a all type of given data
 * @format: the given format to determine the type to be printed
 *
 * Description: accepts data type, such as character, integer,
 * float, and string only.
 */
void print_all(const char * const format, ...)
{
	size_t i;
	va_list all_vars;

	va_start(all_vars, format);
	i = 0;
	while (i < strlen(format))
	{
		if (format[i + 1] != '\0')
			switch (format[i])
			{
				case 'c':
					print_char(va_arg(all_vars, int));
					printf(", ");
					break;
				case 'i':
					print_int(va_arg(all_vars, int));
					printf(", ");
					break;
				case 'f':
					print_float(va_arg(all_vars, double));
					printf(", ");
					break;
				case 's':
					print_string(va_arg(all_vars, char *));
					printf(", ");
					break;
				default:
					break;
			}
		else
			switch (format[i])
			{
				case 'c':
					print_char(va_arg(all_vars, int));
					break;
				case 'i':
					print_int(va_arg(all_vars, int));
					break;
				case 'f':
					print_float(va_arg(all_vars, double));
					break;
				case 's':
					print_string(va_arg(all_vars, char *));
					break;
				default:
					break;
			}
		i++;
	}
	va_end(all_vars);
	printf("\n");
}
