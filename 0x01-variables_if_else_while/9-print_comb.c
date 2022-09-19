/**
*main - negative or positive
*Return: always 0
*/
#include <stdio.h>
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
if (a != '9')
{
putchar(',');
putchar(' ');
}

putchar('\n');
return (0);
}
