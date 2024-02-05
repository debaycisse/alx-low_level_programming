#include "hash_tables.h"

/**
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int new_node_index = 0;
	int compare = 0;
	// DONE: create a new hash_node_t 
		// key MUST not be empty
		// value MUST be duplicated; value can "" but not NULL
	
	// DONE: Obtain the index for the key

	// TODO: add the created node to the table at the obtained index
		// check for collision first AND handle it
			// In case of collision, add the new node at the beginning of the list

	// TODO: Returns: 1 if it succeeded, 0 otherwise

	
	new_node_index = key_index(key, ht->size);
	compare = strcmp(ht->array[new_node_index]->key, key);
	if ((ht->array[new_node_index]) && (compare == 0))
	{
		// TODO: update the value: update_value()
		return (update_value(key, value, ht, new_node_index));
	}
	else if ((ht->array[new_node_index]) && (compare != 0))
	{
		// TODO: collision and must be handled as mentioned above: collision()
	}
	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);
	
}


/**
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *node = NULL;

	if ((strlen(key) <= 0) || (key == NULL))
	{
		perror("The key can not be empty or NULL");
		return (NULL);
	}
	else if (value == NULL)
	{
		perror("The value can not be NULL");
		return (NULL);
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		perror("malloc failure");
		safe_free(node);
		return (NULL);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	return(node);
}


/**
 */
void safe_free(char *data)
{
	if (data)
		free(data);
}


/**
 */
int update_value(const char *k, const char *v,
		hash_table_t *ht, unsigned long int i)
{
	if ((ht->size == 0) || (strlen(k) == 0) ||
		(v == NULL) || (strlen(v) == 0))
		return (0);
	free(ht->array[i]->value);
	ht->array[i]->value = strdup(v);
	return (1);
}
