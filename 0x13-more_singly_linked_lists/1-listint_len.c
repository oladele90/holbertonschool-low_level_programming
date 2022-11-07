#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts elements of a list
 * @h: pointer to a list of elements
 * Return: number of elements printed
 */

size_t listint_len(const listint_t *h)
{
unsigned int count = 0;

if (h == NULL)
	return (0);
while (h)
{
	count++;
	h = h->next;
}
return (count);
}
