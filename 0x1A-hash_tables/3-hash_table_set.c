#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 for success or 0 for fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int hash;
	hash_node_t *my_hash;
	char *val_copy = strdup(value);
	if (ht == NULL)
		return (0);
	my_hash = malloc(sizeof(hash_node_t));
	if (!my_hash)
	{
		free(my_hash);
		return (0);
	}
	if (key == NULL || *key == '\0')
		return (0);
	my_hash->key = strdup(key);
	if (value == NULL)
		return (0);
	my_hash->value = strdup(value);
	hash = key_index((unsigned char *)key, ht->size);
	while (ht->array[hash])
	{
		if (strcmp(ht->array[hash]->key, key) == 0)
		{
			free(ht->array[hash]->value);
			ht->array[hash]->value = val_copy;
			free(my_hash->value);
			free(my_hash);
			return (1);
		}
	}
	if (ht->array[hash] != NULL)
	{
		my_hash->next = ht->array[hash];
		ht->array[hash] = my_hash;
		return (1);
	}
	ht->array[hash] = my_hash;
	return (1);
}
