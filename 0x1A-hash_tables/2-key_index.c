#include "hash_tables.h"

/**
 * key_index - computes the index of a given key
 * @key: the key whose index is to be obtained
 * @size: the size of the hash table
 * Return: the index of the given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_v;

	hash_v = hash_djb2(key);
	return (hash_v % size);
}
