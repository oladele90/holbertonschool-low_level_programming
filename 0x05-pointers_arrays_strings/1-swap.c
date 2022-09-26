#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *@a: value to be pointed to
 *@b: value to be pointed to
 * Return: Always 0.
 */

void swap_int(int *a, int *b)

{
	int A = *a, B = *b;

	*a = B;
	*b = A;
}
