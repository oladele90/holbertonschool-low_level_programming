#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 * Return: pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash;

	my_hash = malloc(sizeof(hash_table_t));
	if (!my_hash)
		return (NULL);
	my_hash->size = size;
	my_hash->array = malloc(sizeof(hash_node_t) * size);
	return (my_hash);
}
