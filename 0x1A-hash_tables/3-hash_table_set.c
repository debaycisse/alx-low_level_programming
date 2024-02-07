#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table inside which the hash nodes are stored
 * @key: the hash node's key
 * @value: the hash node's value
 * Return: 1 if no error, otherwise 0 is returned
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int new_node_index = 0;
	int compare = 0;
	
	new_node_index = key_index(key, ht->size);
	compare = strcmp(ht->array[new_node_index]->key, key);
	if ((ht->array[new_node_index]) && (compare == 0))
		return (update_value(key, value, ht, new_node_index));
	else if ((ht->array[new_node_index]) && (compare != 0))
		return (collision(new_node_index, ht, key, value));
	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);
	if (store_node(ht, new_node, new_node_index))
		return (1);
	return (0);
}


/**
 * create_hash_node - creates a new hash node item
 * @key: the key to be used in creating a new hash node
 * @value: the value to be used in creating a new hash node
 * Return: a pointer to the newly create hash node
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
 * safe_free - freely (without an error) frees a used space
 * @data: the data to be freed
 */
void safe_free(char *data)
{
	if (data)
		free(data);
}


/**
 * update_value - updates a value of an existing hash node
 * @k: the key of the existing hash node
 * @v: the value to be used in updating the existing value
 * @ht: the hash table in which the value to be updated is stored
 * @i: the index or position in the table where to look for the value
 * Return: 1, if no error, 0 otherwise
 */
int update_value(const char *k, const char *v,
		hash_table_t *ht, unsigned long int i)
{
	if ((ht->size == 0) || (strlen(k) == 0) ||
		(v == NULL) || (k == NULL))
		return (0);
	free(ht->array[i]->value);
	ht->array[i]->value = strdup(v);
	return (1);
}


/**
 * collision - handles collision when addinga new hash node
 * @nn_id: the position where the new hash node is to be stored
 * @ht: the hash table in which the colliding node is to be stored
 * @k: the key of the colliding hash node
 * @v: the value of the colliding hash node
 * Return: 1, if no error, 0 otherwise
 */
int collision(unsigned long int nn_id, hash_table_t *ht,
	      const char *k, const char *v)
{
	hash_node_t *new_node = create_hash_node(k, v);
	if (new_node == NULL)
		return (0);
	new_node.next = ht->array[nn_id];
	ht->array[nn_id] = new_node;
	return (1);
}
