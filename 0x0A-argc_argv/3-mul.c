#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name
 * @argc: argument count void
 * @argv: argument vector [0] returns program name
 * Return: 0
 */

int main(int argc, char **argv)
{
	int s = 0;

	if (argc == 3)
	{
		s = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", s);
		return (0);
	}
	printf("Error\n");
	return (1);
}
