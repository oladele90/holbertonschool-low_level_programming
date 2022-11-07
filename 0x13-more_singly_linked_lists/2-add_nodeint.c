#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of list
 * @head: pointer to pointer of struct
 * @n: integer held in element of struct
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *front;

	front = malloc(sizeof(listint_t));
	if (!front)
	{
		free(front);
		return (NULL);
	}
	front->n = n;
	front->next = *head;
	*head = front;
	return (front);
}
