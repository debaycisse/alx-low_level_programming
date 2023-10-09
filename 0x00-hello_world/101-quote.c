#include <unistd.h>
#include <string.h>

/**
 * main - entry point to the program
 *
 * Description: this program prints out to the standard error instead of
 * standard output, using a function other than those mentioned in printf
 * and puts manual section 345
 * Return: returns 1 to generate an error whose so that the error message
 * is accessible in the standard error stream
 */
int main(void)
{
	char *sentence = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";
	int sentence_length = strlen(sentence);

	write(2, sentence, sentence_length);
	return (1);
}
