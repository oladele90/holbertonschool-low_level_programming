#include <stdio.h>

/**
 * main - prints its name
 * @argc: argument count void
 * @argv: argument vector [0] returns program name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
