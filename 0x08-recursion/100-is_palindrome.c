char *reverse_s(char *s);
int val_palindrome(char *s, char *s_reversed);

/**
 * is_palindrome - determines if a given string is palindrome
 * @s: pointer to the string
 *
 * Description: determines if a given string is a palindrome or not
 * Return: returns 1 if it is a palindrome, otherwise 0
*/
int is_palindrome(char *s)
{
	char *s_reversed;
	int are_they_pal;

	// reverse s and store in s_reversed
	s_reversed = reverse_s(s);
	// compare both: set the base case
	are_they_pal = val_palidrome(s, s_reversed);

	// if the same: return 1, otherwise 0
	if (are_they_pal == 1)
		return (1);
	else
		return (0);
}

char *reverse_s(char *s)
{
	char s_cpy[1024];
	// copy the pointer into an array recusively
	copy_string(s, s_cpy);

	// reverse
	reverse(s_cpy);
}

int val_palindrome(char *s, char *s_reversed)
{
}

void copy_string(char *s, char *destination)
{
	if (*s != '\0')
	{
		*destination = *s;
		copy_string(s + 1, destination + 1);
	}
	else
		*destination = '\0';
}
