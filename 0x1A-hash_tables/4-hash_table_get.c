#include "hash_tables.h"

/**
 * hash_table_get - gets a hash node value from the hash table
 * @ht: the hash table in which the hash nodes are looked up
 * @key: the key with which the location to search is obtained
 * Return: the value of the key or null, if no key is found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int id = 0;
	hash_node_t *current_node = ht->array[id];

	id = key_index((const unsigned char *)key, ht->size);
	if (ht->array[id] != NULL)
	{
		current_node = ht->array[id];
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		while (current_node != NULL)
		{
			if (strcmp(current_node->key, key) == 0)
				return (current_node->value);
			current_node = current_node->next;
		}
	}
	return (NULL);
}
