#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of list
 * @index: the index of a node starting from 0
 * @head: pointer to the head of a node
 * Return: nth node of index or NULL for fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	node = head;
	for (i = 0; i < index; i++)
		node = node->next;
	if (node == NULL)
		return (NULL);
	return (node);
}
