#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: a doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	unsigned int i = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		i++;
		node = node->next;
	}
	return (i);
}
