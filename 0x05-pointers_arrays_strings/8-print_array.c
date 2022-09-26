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
	int count = 0;

	while ((a[count] < a[n]) && (a[count] != '\0'))
	{
		printf("%i, ", a[count]);
		count++;
	}
	printf("\n");
}
