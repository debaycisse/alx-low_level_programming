/*
   Write a function that fills memory with a constant byte.

Prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s
FYI: The standard library provides a similar function: memset. Run man memset to learn more.
*/

/**
 * _memset - fills the first n bytes of the memory
 * @s: pointer to the memory location whose value spaces should be filled
 * @b: the character constant to be used in filling up the memory space
 * @n: number of memory space to be filled
 * Return: pointer to the filled memory space
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;

	}
	return (s);
}
