#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a node to the beginning of list_t
 * @str: pointer to character arrat
 * @head: pointer to address of pointer
 * Return: address of new element on success or NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *front;

	front = malloc(sizeof(list_t));
	while (str[count])
		count++;
	front->str = strdup(str);
	front->len = count;
	front->next = *head;
	*head = front;
	return (front);
}
