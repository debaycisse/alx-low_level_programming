#include <stdlib.h>

/**
 * _calloc - creates an array via malloc function
 * @nmemb: the number of elements of the array
 * @size: the byte size per each element that make up the array
 *
 * Description: creates an array of nmemb items, withe byte size per each
 * Return: void pointer if no error, otherwise NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;
	char *c_char;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	c_char = (char *) c;
	for (i = 0; i < (nmemb * size); i++)
		c_char[i] = 0;
	return (c);
}
