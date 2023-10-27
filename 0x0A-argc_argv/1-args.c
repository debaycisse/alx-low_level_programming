#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 * @argc: number of argument passed to the program
 * @argv: the pointer to the passed argument
 *
 * Return: always 0, but 1 if error occurs
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
