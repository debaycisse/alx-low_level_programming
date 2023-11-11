#include <string.h>
#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - gets an appropriate function pointer for an operation
 * @s: the operator that is used to determine the appropriate function
 *
 * Description: uses the s string, which is an operator to determine
 * an appropriate function
 * Return: the pointer to the appropriate function, which is later use
 * to carry out the operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
