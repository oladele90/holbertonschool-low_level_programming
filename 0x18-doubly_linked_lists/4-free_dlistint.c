#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: pointer to head of list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nt;

	while (head != NULL)
	{
		nt = head->next;
		free(head);
		head = nt;
	}
	free(head);
}
