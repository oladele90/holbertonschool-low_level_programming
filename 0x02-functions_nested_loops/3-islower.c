#include "main.h"

/**
 * _islower - check to see if letter is lower case.
 *
 * Return: 1 if c is lower case
 */
int _islower(int c)
{
int c;
if (c <= 'z' && c >= 'a')
return (1);
else
return (0);
}
