/**
*main - negative or positive
*Return: always 0
*/
#include <stdio.h>
int main(void)
{
char a;
int  A;
for (a = '0'; a <= '9'; a++)
putchar(a);
for (A = 'a'; A <= 'f'; A++)
putchar(A);
putchar('\n');
return (0);
}
