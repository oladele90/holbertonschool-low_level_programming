#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_len - prints elements of all nodes in linked list
 * @h: pointer to node in linked list
 * Return: an unsigned integer thet represents total amount of nodes in list
 */

size_t list_len(const list_t *h)
{
unsigned int count = 0;
const list_t *temp = h;

while (temp)
{
	temp = temp->next;
	count++;
}
return (count);
}
