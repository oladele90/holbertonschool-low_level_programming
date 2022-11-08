#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all data contained in the elements of list
 * @head: pointer to head of list
 * Return: integer the represents sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *add_em;
	int sum = 0;

	if (head == NULL)
		return (0);
	add_em = head;
	while (add_em)
	{
		sum += add_em->n;
		add_em = add_em->next;
	}
	return (sum);
}
