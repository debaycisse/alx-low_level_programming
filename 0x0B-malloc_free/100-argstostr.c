#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	char *new_av;
	int i;
	int j;
	int k;
	int sum;

	if (ac == 0 || av == NULL)
		return (NULL);
	sum = 0;
	i = 1;
	while (i < ac)
	{
		sum += strlen(av[i]) + 1;
		i++;
	}
	sum++;
	new_av = malloc(sum * sizeof(char));
	i = 1;
	while (i < ac)
	{
		strcat(new_av[i],av[i])
	}
	return (new_av);
}
