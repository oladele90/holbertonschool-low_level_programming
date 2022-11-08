#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes head node and returns data
 * @head: pointer to pointer of node
 * Return: integer that was stored in deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *killed_node;
	int i;

	if (*head == NULL)
		return (0);
	killed_node = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = killed_node;
	return (i);
}
