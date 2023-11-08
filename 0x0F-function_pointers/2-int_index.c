/**
 * int_index - obtains the first occurence of a number in an array
 * @array: array to search for the given number
 * @size: size of a given array
 * @cmp: pointer to the function that compares the given number
 *
 * Return: index of the first occcurence of the number, -1 if no match is found
*/
int int_index(int *array, int size, int (*cmp) (int))
{
	int i;
	int matched_index = 0;
	int flag;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			matched_index = i;
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		return (matched_index);
	else
		return (-1);
}
