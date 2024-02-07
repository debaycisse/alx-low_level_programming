#include "hash_tables.h"

/**
 * store_node - stores a new node inside the hash table
 * @ht: the hash table where the new hash node is to be stored
 * @n_n: the newly created hash node to be stored
 * @n_n_id: the index in the table where the new node is to be stored
 * Return: 1, if no error, 0 otherwise
 */
int store_node(hash_table_t *ht, hash_node_t *n_n, unsigned long int n_n_id)
{
	hash_node_t *current_node = ht->array[n_n_id];

	if (ht->array[n_n_id] == NULL)
	{
		ht->array[n_n_id] = (hash_node_t *)n_n;
		return (1);
	}
	else if (ht->array[n_n_id] != NULL)
	{
		while (current_node != NULL)
			current_node = current_node->next;
		current_node->next = (struct hash_node_s *)n_n;
		return (1);
	}
	return (0);
}
