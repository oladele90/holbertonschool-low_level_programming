#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements in an array
 *@a: points to elements im array
 *@n: number of elements in array
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; ((count <= a[n -1]) && (*(a +count) != '\0')); count++)
	{
		printf("%i, ", a[count]);
	}
	printf("\n");
}
