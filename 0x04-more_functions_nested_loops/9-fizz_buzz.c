#include <stdio.h>

/**
 *main - maka da buzz
 *
 *Return: o
 */

int main(void)
{
	int i = 1;

	while (i <= 99)
	{
	if (i % 15 <= 0)
		printf("FizzBuzz");
	else if (i % 5 <= 0)
		printf("Buzz");
	else if (i % 3 <= 0)
		printf("Fizz");
	else
		printf("%d", i);
	putchar(' ');
	i++;
	}
	printf("Buzz");
	putchar('\n');
	return (0);
}
