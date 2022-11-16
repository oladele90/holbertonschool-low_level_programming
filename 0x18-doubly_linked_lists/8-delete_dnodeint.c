#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @index: nodeto be deleted
 * @head: points to pointer of head of list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = *head;
	if (*head == NULL)
		return (-1);
	for (i = 0; i < index; i++)
		node = node->next;
	if (*head == node)
		*head = node->next;
	if (node->prev != NULL)
		node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	free(node);
	return (1);
}
