#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers with separator
 * @separator: separates numbers
 * @n: number of integers to be print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	if (n <= 0)
		return;
	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(args, int);
		if (separator != NULL)
			printf("%d%s", x, separator);
		else
			printf("%d", x);
	}
	x = va_arg(args, int);
	printf("%d", x);
	printf("\n");
	va_end(args);
}
