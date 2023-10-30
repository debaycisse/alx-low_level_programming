#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: the character to use for initialization
 *
 * Return: pointer to the character array
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ch = malloc(size * sizeof(*ch));
	if (ch == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ch[i] = c;
		i++;
	}
	return (ch);
}
