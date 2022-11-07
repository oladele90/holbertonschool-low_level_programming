#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list of structs
 * @head: pointer to element in list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *voider;

	while (head != NULL)
	{
		voider = head->next;
		free(head->str);
		free(head);
		head = voider;
	}
}
