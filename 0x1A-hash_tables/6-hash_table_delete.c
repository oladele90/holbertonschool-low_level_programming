#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to erase
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hash = ht;
	hash_node_t *node, *node2;
	unsigned int i;

	for (i = 0; i < hash->size; i++)
	{
		if (hash->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				node2 = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = node2;
			}
		}
	}
	free(hash->array);
	free(hash);
}
