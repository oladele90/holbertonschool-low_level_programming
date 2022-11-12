#include "hash_tables.h"

/**
 * hash_table_get - gets value associated with key
 * @ht: hash table
 * @key: key to look for
 * Return:value for success NULL for fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i = key_index((unsigned char *)key, ht->size);

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			if (ht->array[i]->value == NULL)
				return ("(null)");
			return (ht->array[i]->value);
		}
	}
		return (NULL);
}
