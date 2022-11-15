#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to a pointer to head of list
 * @n: data to store in new node
 * Return: new node if success or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node, *nt;

node = malloc(sizeof(dlistint_t));
if (!node)
	return (NULL);
if (*head == NULL)
{
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	*head = node;
	return (*head);
}
for (nt = *head; nt->next != NULL; nt = nt->next)
	;
node->prev = nt;
node->next = NULL;
node->n = n;
nt->next = node;
return (*head);
}
