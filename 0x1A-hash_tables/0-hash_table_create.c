#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hash table
 * @size: the size of cells or rows of the table
 * Return: the newly created table or NULL, if error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (!table)
	{
		return (NULL);
		
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!(table->array))
		return (NULL);
	return (table);
}
