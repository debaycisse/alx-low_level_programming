#include <stdlib.h>

/**
 * str_concat - concatenates two strings together
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 *
 * Description: concatenates the second string to the first string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size;
	unsigned int i;
	unsigned int j;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		size += 1;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		size += 1;
		i++;
	}
	size++;
	concat_str = malloc(size * sizeof(*concat_str));
	if (concat_str == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		concat_str[i] = s2[j];
		i++;
		j++;
	}
	concat_str[i] = '\0';
	return (concat_str);
}
