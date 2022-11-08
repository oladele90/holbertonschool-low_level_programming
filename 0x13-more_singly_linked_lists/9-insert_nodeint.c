#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: pointer to pointer of list head
 * @idx: represents index at which new node should be added
 * @n: data that new node will contain
 * Return: pointer to address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp_node;

	temp_node = malloc(sizeof(listint_t));
	if (!temp_node)
		return (NULL);
	new_node = *head;
	temp_node->n = n;
	if (idx == 0)
	{
		temp_node->next = new_node;
		*head = temp_node;
		return (temp_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (new_node == NULL || new_node->next == NULL)
			return (NULL);
		new_node = new_node->next;
	}
	temp_node->next = new_node->next;
	new_node->next = temp_node;
	return (temp_node);
}
