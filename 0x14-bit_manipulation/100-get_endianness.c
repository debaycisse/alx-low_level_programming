#include "main.h"

/**
 * get_endianness - determines endianness
 *
 * Return: 1 if it is big endian, otherwise 0
 */
int get_endianness(void)
{

	int num = 1;
	int num_s = sizeof(num);

	if ((num_s & 1) == 1)
		return (0);
	else
		return (1);
}
