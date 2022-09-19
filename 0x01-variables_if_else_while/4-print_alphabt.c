/**
*main - negative or positive
*Return: always 0
*/
#include <stdio.h>
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
if (a != 'e' && a != 'q')
{
putchar(a);
}
putchar('\n');
return (0);
}
