#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - gets function to use in main code
 * @s: operator
 *Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (*(ops[i].op) != *s && ops[i].op != NULL)
		i++;
	return (ops[i].f);
}
