#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to base 10
 * @b: string of binary values
 * Return: the base-10 equivalent of the given binary string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total;
	int i;

	if (b == NULL)
		return (0);

	i = 0;
	total = 0;
	while (b[i] != '\0')
	{
		if ((b[i] != '1') && (b[i] != '0'))
			return (0);
		total = (total << 1) + (b[i] - '0');
		i++;
	}
	return (total);
}
