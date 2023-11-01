#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates the passed parameters
 * @ac: the counter for the number of passed parameters
 * @av: the multi-dimensional array to the passed parameters
 *
 * Description: copies and concatenates the passed parameters
 * Return: the pointer to the concatenated string or null, if error.
 */
char *argstostr(int ac, char **av)
{
	char *new_av;
	int i;
	int sum;
	int p_location;
	int char_len;

	if (ac == 0 || av == NULL)
		return (NULL);
	sum = 0;
	i = 1;
	while (i < ac)
	{
		char_len = (int)strlen(av[i]);
		sum += char_len;
		sum++;
		i++;
	}
	sum++;
	new_av = malloc(sum * sizeof(char));
	if (new_av == NULL)
		return (NULL);
	p_location = 0;
	i = 1;
	while (i < ac)
	{
		char_len = (int)strlen(av[i]);
		strncpy(new_av + p_location, av[i], char_len);
		p_location += char_len;
		new_av[p_location] = '\n';
		p_location++;
		i++;
	}
	p_location++;
	new_av[p_location] = '\0';
	return (new_av);
}
