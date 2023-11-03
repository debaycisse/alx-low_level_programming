#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings together
 * @s1: the pointer to the first string
 * @s2: the pointer to the second string
 * @n: number of string to copy if length of s2 is greater than n
 *
 * Return: the new pointer that contains the string if no error
 * else, NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	char *s4;
	unsigned int length = 0;
	unsigned int s1_len;
	unsigned int s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (s2_len <= n)
		length = s1_len + s2_len + 1;
	else
		length = s1_len + n + 1;
	s3 = malloc(length * sizeof(*s3));
	(void) s4;
	if (s3 != NULL)
	{
		strcpy(s3, s1);
		s4 = s3 + s1_len * sizeof(char);
		if (s2_len <= n)
		{
			strcpy(s4, s2);
			s4[s2_len + 1] = '\0';
		}
		if (s2_len > n)
		{
			strncpy(s4, s2, n);
			s4[n + 1] = '\0';
		}
		return (s3);
	}
	else
		return (NULL);
}
