#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op = argv[2];
	int (*op_func)(int, int);
	int answer;


	if ((argc < 4) && (argc > 4))
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(op, "+")) != 0 && (strcmp(op, "-")) != 0 && \
			(strcmp(op, "*")) != 0 && (strcmp(op, "/")) != 0 \
			&& (strcmp(op, "%")) != 0)
	{
		printf("Error2 op is %s\n", argv[3]);
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((strcmp(op, "/") == 0 && b == 0) || (strcmp(op, "%") == 0 && b == 0))
	{
		printf("Error3\n");
		exit(100);
	}
	op_func = (*get_op_func(op));
	answer = op_func(a, b);
	printf("%d\n", answer);
	return (0);
}
