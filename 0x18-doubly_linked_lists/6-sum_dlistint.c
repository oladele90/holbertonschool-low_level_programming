#include "lists.h"

/**
 * sum_dlistint - returns the sum of data in list
 * @head: pointer to the head of a node
 * Return: sum of data or 0
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *node;
int i = 0;

if (head == NULL)
	return (0);
for (node = head; node != NULL; node = node->next)
	i += node->n;
return (i);
}
