#include "hash_tables.h"

/**
 * hash_table_delete - deletes a given hash_table elements and all used space
 * @ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current_node = NULL, *temp = NULL;

	while (i < ht->size)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			if (temp != NULL)
				free(temp);
			free(current_node->key);
			free(current_node->value);
			if (current_node->next != NULL)
			{
				temp = current_node;
				current_node = current_node->next;
			}
			else
			{
				free(current_node);
				current_node = NULL;
			}
		}
		temp = NULL;
		i++;
	}
	free(ht->array);
	free(ht);
}
