/**
 *main - negative or positive
 *Return: always 0
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is 0\n", n);
}
return (0);
}
