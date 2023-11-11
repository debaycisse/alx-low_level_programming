#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry to the program
 * @argc: the number of passed parameters
 * @argv: the array of all passed parameters
 *
 * Description: performs five different numerical operations,
 * such as +, -, *, /, %
 * Return: 0 if no error, otherwise a value greater than 0 is retuned
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op = argv[2];
	int (*op_func)(int, int);
	int answer;
	int not_add = ((strcmp(op, "+")) != 0);
	int not_sub = ((strcmp(op, "-")) != 0);
	int not_div = ((strcmp(op, "/")) != 0);
	int not_mul = ((strcmp(op, "*")) != 0);
	int not_mod = ((strcmp(op, "%")) != 0);


	if ((argc < 4) || (argc > 4))
	{
		printf("Error\n");
		exit(98);
	}
	if (not_add && not_sub && not_mul && not_div && not_mod)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((strcmp(op, "/") == 0 && b == 0) || (strcmp(op, "%") == 0 && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	op_func = (*get_op_func(op));
	answer = op_func(a, b);
	printf("%d\n", answer);
	return (0);
}
