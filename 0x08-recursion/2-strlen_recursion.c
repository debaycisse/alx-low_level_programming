#include "main.h"

/**
 * _strlen_recursion - returns the length of a set of given characters
 * @s: the pointer to the location where the set of characters is located
 *
 * Description: returns the length of the given set of characters
 * using recursion
 * Return: the length of the given characters
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
	s++;
}
