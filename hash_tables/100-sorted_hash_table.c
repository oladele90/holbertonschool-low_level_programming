#include "hash_tables.h"

/**
* shash_table_create - creates a hash table
* @size: size of new hash table
* Return: none
*/

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

/**
* shash_table_set - sets new node in hash table and sorts it
* @ht: hash table
* @key: new key for ne node
* @value: values of node
* Return: none
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *temp;
	unsigned int hash;

	if (ht == NULL)
		return (0);
	hash = key_index((unsigned char *)key, ht->size);
	for (temp = ht->array[hash]; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
	}
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
	new->snext = NULL;
	new->sprev = NULL;
	if (ht->array[hash] != NULL)
	{
		new->next = ht->array[hash];
		ht->array[hash] = new;
	}
	ht->array[hash] = new;
	set_h(ht, new);

	return (1);
}

/**
* shash_table_print - prints hash table
* @ht: hash table to print
* Return: none
*/

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp_node;

	if (ht == NULL)
		exit(EXIT_FAILURE);
	temp_node = ht->shead;
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

/**
* shash_table_print_rev - prints sorted hash table in reverse
* @ht: hash table to print
* Return: none
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp_node;

	if (ht == NULL)
		exit(EXIT_FAILURE);
	temp_node = ht->stail;
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

/**
* shash_table_delete - frees a hash table
* @ht: hash table
* Return: none
*/

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

/**
* shash_table_get - gets a node value based on key
* @ht: hash table
* @key: the key to get
* Return: value
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (!node)
		return (NULL);

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

/**
* set_h - sorts node and sets head and tail
* @ht: hash table
* @new_node: new node to be sorted
* Return: 1 or 0
*/

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
		for (temp_node = ht->shead; temp_node != NULL; temp_node = temp_node->snext)
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
			if (!temp_node->snext)
				break;
		}
		temp_node->snext = new_node;
		new_node->sprev = temp_node;
		ht->stail = new_node;
	}
	return (0);
}
