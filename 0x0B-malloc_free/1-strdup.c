#include <stdlib.h>

/**
 * _strdup - duplicates a given string
 * @str: the string to duplicate or copy
 *
 * Description: duplicates a string, contained in a given character pointer
 * Return: pointer to the new memory location that houses the duplicates
 */
char *_strdup(char *str)
{
	long char *str_dup;
	int i;
	int size;

	if (str == NULL)
		return (NULL);
	size = 0;
	while (str[size] != '\0')
		size++;
	str_dup = malloc(size * sizeof(*str_dup));
	if (str_dup == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str_dup[i] = str[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
