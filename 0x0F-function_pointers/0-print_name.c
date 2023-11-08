/**
 * print_name - prints a given character via a given function
 * @name: the given set of characters or string
 * @f: the given function pointer
 *
 * Description: uses the given function via the function pointer
 * to print out the given string or set of characters
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
