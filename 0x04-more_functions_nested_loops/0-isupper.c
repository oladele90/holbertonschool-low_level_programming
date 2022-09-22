#include "main.h"

/**
 *_isupper - determines if a character is upper case
 *@c: is the value returned
 *Return:1 for true and 0 for false
 */

int _isupper(int c)
{
	if ((c <= 'Z') && (c >= 'A'))
	{
		return (1);
	}
	return (0);
}
