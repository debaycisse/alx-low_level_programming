#include "main.h"

unsigned long int mul(unsigned long int n1, unsigned long int n2)
	return (n1 * n2);

int main(int argc, char *argv)
{
	char *msg = "Error\n";
	int = i;
	unsigned long int result; 

	if (argc > 2)
	{
		for (i = 0; msg[i] != '\0'; i++)
			_putchar(msg[i]);
		exit(98);
	}
	if (!(isdigit(n1)) || !(isdigit(n2)))
	{		
		for (i = 0; msg[i] != '\0'; i++)
			_putchar(msg[i]);
		exit(98);
	}
	result = mul(argv[1], argv[2]);
	return (0);
}
