#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end of list
 * @str: pointer to character array
 * @head: pointer to address of pointer
 * Return: address of new element on success or NULL if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
        int count = 0;
        list_t *front, *end;

	front = malloc(sizeof(list_t));
        while (str[count])
                count++;
        front->str = strdup(str);
        front->len = count;
	front->next = NULL;
        if (*head == NULL)
		*head = front;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = front;
	}
        return (*head);
}
