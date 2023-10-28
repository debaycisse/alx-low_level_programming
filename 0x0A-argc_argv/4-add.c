#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * main - entry point to the program
 * @argc: the number of elements at the pointer
 * @argv: the array of pointers to the passed argument
 * Description: adds two or more numbers together and outputs the result
 * Return: 0 if no error, else 1.
 */
int main(int argc, char *argv[])

{
	int i;
	int sum = 0;
	int num;

	if (argc == 1)
		printf("%d\n", 0);
	if (argc == 2)
		printf("%d\n", atoi(argv[1]));
	if (argc >= 3)
	{
		i = 1;
		while (i < argc)
		{
			num = atoi(argv[i]);
			if (num == 0 && argv[i][0] != '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
