/*
   Write a function that gets the length of a prefix substring.

Prototype: unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept
*/

#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string whose specific substring's length is gotten
 * @accept: pointer to the set of characters
 * or string to be looked up in s pointer 
 * Description: gets the length of a specific substring in s that contains
 * all the characters in accept's pointer
 * Return: the length of the substring if found, otherwise 0 (zero)
*/
int _strspn(char *s, char *accept)
{
	char *found_ch;
	int found_cnt;
	int i;
	int j;
	int substr_len;
	int found_len = 0;
	int k;

	j = 0;
	while (*(accept + j) != '\0')
		j++;

	i = 0;
	while (*(s + i) != '\0')
	{
		// Getting the length of the next substring in s
		substr_len = 0;
		while (*(s + substr_len) != 32)
			substr_len++;
		// check all characters of the sub-string for each character that makes up accept
		k = 0;
		while (k < j)
		{
			found_cnt = 0;
			while (l < substr_len++)
			{
				if (*(s + l)  == *(accept + k))
				{
					*(found_ch + found_cnt) = *(accept + k);
					found_cnt++;
					l++;
				}
				else
					l++;
			}

			if ((int) sizeof(found_ch) == j)
				break;
			else
				k++;
		}
	}
}
