#include "lists.h"

/**
 * print_dlistint_backward - prints dlist backward
 * @h: pointer to a pointer to head of list
 * Return: number of printed nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *node;
	unsigned int i = 0;

	for (node = h; node->next != NULL; node = node->next)
		;
	for (; node != NULL; node = node->prev)
	{
		printf("%d\n", node->n);
		i++;
	}
	return (i);
}
