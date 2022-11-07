#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer to a list of elements
 * Return: number of elements printed
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
