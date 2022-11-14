#include "lists.h"

/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: a doubly linked list
 * Return: unsigned int representing number of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	unsigned int i = 0;

	while (node != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}
