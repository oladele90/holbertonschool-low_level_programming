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
	hash_node_t *node;

	if (i >= ht->size)
		return (NULL);
	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);
	node = ht->array[i];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
		return (NULL);
}
