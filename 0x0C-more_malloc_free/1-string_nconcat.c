#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
   Write a function that concatenates two strings.

Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
If the function fails, it should return NULL
If n is greater or equal to the length of s2 then use the entire string s2
if NULL is passed, treat it as an empty string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int length = 0;
	int s1_len;
	int s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	(void) s2_len;
	length = s1_len + 1 + n;

	s3 = malloc(length * sizeof(*s3));
	if (s3 != NULL)
	{
		strcpy(s3, s1);
		length = strlen(s1) + 1;
		s3 = s3 + (int)length;
		printf("memory location after: %p", s3);
		length = strlen(s2);
		if (length <= n)
		{
			strcpy(s3, s2);
			length++;
			s3[length] = '\0';
		}
		if (length > n)
		{
			strncpy(s3, s2, n);

			n++;
			s3[n] = '\0';
		}
		return (s3);
	}
	else
		return (NULL);
}
