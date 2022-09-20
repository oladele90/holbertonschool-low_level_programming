#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet ten times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int n = 1;
int m;
while (n <= 10)
{
for (m = 'a'; m <= 'z'; m++)
{
_putchar(m);
}
_putchar('\n');
n++;
}
return;
}
