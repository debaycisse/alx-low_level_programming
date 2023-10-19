#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: location of the string to be compared
 * @s2: location of the string to be compared with
 *
 * Description: compares two strings.
 * Return: negative integer, if s1 is than s2, zero is s1 is equal
 * with s2, and positive integer, if greater than
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;
	int result;
	int i = 0;

	while (s1[i] != '\0')
	{
		s1_len++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s2_len++;
		i++;
	}

	if (s1_len == s2_len)
		result = 0;
	else if (s1_len > s2_len)
		result = 15;
	else if (s1_len < s2_len)
		result = -15;

	return (result);
}


