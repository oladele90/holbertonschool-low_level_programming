#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees all nodes in list
 * @head: points to a node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *voider;

	while (head != NULL)
	{
		voider = head->next;
		free(head);
		head = voider;
	}
}
