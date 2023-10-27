#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry to the program
 * @argc: the number of passed arguments
 * @argv: the array of pointers to the passed argument(s)
 *
 * Description: muliplies two numbers and displays their result.
 * Return: 0 always, except if there is an error, in which 1 is retuned
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = 1;
	i = 1;
	while (i < argc)
	{
		sum *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
