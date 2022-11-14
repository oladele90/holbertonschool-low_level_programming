#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: the hash table to be printed
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, x = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (x > 1)
				printf(", ");
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			x++;
		}
	}
	printf("}\n");
}
