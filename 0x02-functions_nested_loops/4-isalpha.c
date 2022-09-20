#include "main.h"
/**
* _isalpha - check to see if character is a letter.
*@c: return value
* Return: 1 if c is a letter
*/
int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
{
return (1);
}
else
{
return (0);
}
}
