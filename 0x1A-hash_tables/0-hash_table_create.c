#include "hash_tables.h"
#include <stdint.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of array
 * Return: pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash;
	unsigned int i;

	if (size < 1 || size > SIZE_MAX)
		return (NULL);
	my_hash = malloc(sizeof(hash_table_t));
	if (!my_hash)
		return (NULL);
	my_hash->size = size;
	my_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (my_hash->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		my_hash->array[i] = NULL;
	return (my_hash);
}
