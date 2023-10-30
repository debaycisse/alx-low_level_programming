#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry to the program
 * @argc: the number of passed parameters
 * @argv: the array of pointers to the passed parameters
 * Description: outputs the number of coins, needed to exchange a
 * passed amount of cent
 * Return: 0 if no error, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int given_cent;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	given_cent = atoi(argv[1]);
	if (given_cent == 0 && argv[1][0] != '0')
	{
		printf("Not A Number\n");
		return (1);
	}
	if (given_cent <= 0)
	{
		printf("0\n");
		return (1);
	}
	if (argc == 2)
	{
		i = 0;
		cents = 0;
		while (i < 5)
		{
			while (given_cent >= coins[i])
			{
				given_cent -= coins[i];
				cents++;
			}
			i++;
		}
		printf("%d\n", cents);
	}
	return (0);
}
