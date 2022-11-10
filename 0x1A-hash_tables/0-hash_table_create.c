#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 * Return: pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash;
	int i = size;

	my_hash = malloc(sizeof(hash_table_t) * size);
	if (!my_hash)
	{
		free(my_hash);
		return (NULL);
	}
	return (my_hash);
}
