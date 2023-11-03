#include <stdlib.h>

/**
 * _realloc - reallocates a dynamic memory location on runtime
 * @ptr: pointer to the existing memory location
 * @old_size: the size in byte of the existing memory location
 * @new_size: the size in byte to be used for the reallocation
 *
 * Return: the pointer to the new reallocated memory space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *ptr_char;
	char *new_ptr_char;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		ptr_char = (char *) ptr;
		new_ptr_char = (char *) new_ptr;
		for (i = 0; i < old_size; i++)
			new_ptr_char[i] = ptr_char[i];
		free(ptr);
		return (new_ptr);
	}
	if (new_size < old_size)
	{
		new_ptr = malloc(new_size);
		ptr_char = (char *) ptr;
		new_ptr_char = (char *) new_ptr;
		for (i = 0; i < new_size; i++)
			new_ptr_char[i] = ptr_char[i];
		free(ptr);
		return (new_ptr);
	}
	return (NULL);
}
