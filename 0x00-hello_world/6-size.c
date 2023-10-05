#include <stdio.h>
/**
 * main - displays different type sizes
 *
 * Description: This function displays the sizes of char, int,
 * long int, long long int, and float in both 32 and 64 bits architectures
 * Return: Always returns 0(success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
