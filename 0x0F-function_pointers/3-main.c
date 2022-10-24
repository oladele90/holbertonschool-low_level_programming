#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - performs simple operations
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	op = argv[2];
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	if (argv[2] == "/" && argv[3] == "0"
	    || argv[2] == "%" && argv[3] == "0")
	{
		printf("Error\n");
		exit (100);
	}
	num1 = argv[1];
	num2 = argv[3];
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
