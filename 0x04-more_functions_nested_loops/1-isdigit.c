#include "main.h"

/**
 * _isdigit - check to see if character is a digit from 1-9
 *@c: value returned
 *
 * Return: value of c
 */

int _isdigit(int c)
{
	if ((c <= '9') && (c >= '0'))
		return (1);
	return (0);
}
