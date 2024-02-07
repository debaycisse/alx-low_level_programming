#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* 0-hash_table_create.c */
hash_table_t *hash_table_create(unsigned long int size);

/* 1-djb2.c" */
unsigned long int hash_djb2(const unsigned char *str);
int store_node(hash_table_t *ht, hash_node_t *n_n, unsigned long int n_n_id);

/* 2-key_index.c */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* 3-hash_table_set.c */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
hash_node_t *create_hash_node(const char *key, const char *value);
void safe_free(hash_node_t *data);
int update_value(const char *k, const char *v,
				 hash_table_t *ht, unsigned long int i);
int collision(unsigned long int nn_id, hash_table_t *ht,
			  const char *k, const char *v);

/* 4-hash_table_get.c */
char *hash_table_get(const hash_table_t *ht, const char *key);

/* 5-hash_table_print.c */
void hash_table_print(const hash_table_t *ht);

#endif
