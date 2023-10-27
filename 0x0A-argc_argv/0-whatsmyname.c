#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 * @argc: number of argument for argv array
 * @argv: pointer to the given string's argument
 *
 * Return: returns 0 if program runs successfully, or 1 otherwise
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
