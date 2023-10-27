#include <stdio.h>
#include "main.h"

/**
 * main - entry to the program
 * @argc: number of argument(s) passed to the program
 * @argv: array of pointer to all passed argument
 *
 * Return: 0 always, but 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}

	return (0);
}
