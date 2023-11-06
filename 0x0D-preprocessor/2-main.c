#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: prints the name of this file using a predefined MACRO
 * Return: zero if no error, otherwise a value greater than zero
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
