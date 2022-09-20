#include "main.h"
/**
* _abs - return absolute value of number.
*@n: return value
* Return: 0
*/
int _abs(int n)
{
if (n >= 1)
{
return (n);
}
else if (n <= -1)
{
n = (n * -1);
return (n);
}
else
{
return (0);
}
}
