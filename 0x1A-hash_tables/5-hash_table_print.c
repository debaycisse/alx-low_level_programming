#include "hash_tables.h"

/**
 * hash_table_print - prints the key/value from the hash table
 * @ht: pointer to the hash_table
 *
 * Description: prints the key/value from the hash
 * table in the order they are stored
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current_node = NULL;
	int added = 0;

	printf("{");
	while (i < ht->size)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			if (added)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			added += 1;
			current_node = current_node->next;
		}
		i++;
	}
	printf("}\n");
}
