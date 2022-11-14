#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of list
 * @head: head of list
 * @n: data of node
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (n = NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
	if (head == NULL)
		return (NULL);
	return (*head);
}
