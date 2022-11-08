#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the indexth node
 * @head: pointer to head node
 * @index: reference to nth node
 * Return: pointer to nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *find_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	find_node = head;
	for (i = 0; i < index; i++)
	{
		find_node = find_node->next;
		if (!find_node)
			return (NULL);
	}
	return (find_node);
}
