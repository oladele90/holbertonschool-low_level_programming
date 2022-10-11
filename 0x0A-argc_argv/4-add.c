#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints its name
 * @argc: argument count void
 * @argv: argument vector [0] returns program name
 * Return: 0
 */

int main(int argc, char **argv)
{
int s = 0, i;

if (argc == 1)
{
	printf("%d\n", s);
	return (0);
}
for (i = 1; i < argc; i++)
{
	if (isdigit(*(argv[i])))
		s = (s +  atoi(argv[i]));
	else
	{
		printf("Error\n");
		return (1);
	}
}
printf("%d\n", s);
return (0);
}
