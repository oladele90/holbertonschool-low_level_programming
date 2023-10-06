#include "hashy.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned int i;

	if (size < 1 || size > SIZE_MAX)
		return (NULL);

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	table->shead = NULL;
	table->stail = NULL;

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new;
	unsigned int hash;

	if (ht == NULL)
		return (0);
	new = malloc(sizeof(shash_node_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	if (key == NULL || *key == '\0')
		return (0);
	new->key = strdup(key);
	if (value == NULL)
		return (0);
	new->value = strdup(value);
	hash = key_index((unsigned char *)key, ht->size);
	if (ht->array[hash] != NULL)
	{
		new->next = ht->array[hash];
		ht->array[hash] = new;
		return (1);
	}
	ht->array[hash] = new;
	set_h(ht, new);
	
	return (1);
}

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp_node;

	temp_node = ht->shead;
	if (ht == NULL)
		exit(EXIT_FAILURE);
	printf("{");
	printf("'%s': '%s'", temp_node->key, temp_node->value);
	temp_node = temp_node->snext;
	while (temp_node)
	{
		printf(", '%s': '%s'", temp_node->key, temp_node->value);
		temp_node = temp_node->snext;
	}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp_node;

	temp_node = ht->stail;
	if (ht == NULL)
		exit(EXIT_FAILURE);
	printf("{");
	printf("'%s': '%s'", temp_node->key, temp_node->value);
	temp_node = temp_node->sprev;
	while (temp_node)
	{
		printf(", '%s': '%s'", temp_node->key, temp_node->value);
		temp_node = temp_node->sprev;
	}
	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp_node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp_node = node;
			node = node->next;
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
		}
	}
	free(ht->array);
	free(ht);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	if (!node->next)
		return (node->value);
	
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

int set_h(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *temp_node;

	if (!ht->shead)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		temp_node = ht->shead;

		for (; temp_node->snext != NULL; temp_node = temp_node->snext)
		{
			if (strcmp(new_node->key, temp_node->key) < 0)
			{
				if (temp_node->sprev)
					temp_node->sprev->snext = new_node;
				new_node->sprev = temp_node->sprev;
				new_node->snext = temp_node;
				temp_node->sprev = new_node;
				if (!new_node->sprev)
					ht->shead = new_node;
				return (0);
			}
		}
		temp_node->snext = new_node;
		new_node->sprev = temp_node;
		ht->stail = new_node;
	}
	return (0);
}
