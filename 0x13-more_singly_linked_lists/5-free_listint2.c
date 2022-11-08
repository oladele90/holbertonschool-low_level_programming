#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees all nodes in list and sets head to null
 * @head: points to a node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
listint_t *voider;

if (head == NULL)
	return;
while (*head != NULL)
{
	voider = (*head)->next;
	free(*head);
	*head = voider;
}
head = NULL;
}
