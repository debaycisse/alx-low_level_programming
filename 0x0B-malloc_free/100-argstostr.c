#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	char **new_av;
	int i;
	int j;
	int k;

	if (ac == 0 or av == NULL)
		return (NULL);
	new_av = malloc(ac * sizeof(*new_av));
	if (new_av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (av[0][i] == '\0')
		i++;
	}
}
