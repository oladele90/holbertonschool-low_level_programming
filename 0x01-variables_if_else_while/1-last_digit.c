/**
 *main - negative or positive
 *Return: 0
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m == 0)
{
printf("Last digit of %i is 0 and is 0\n", n);
}
else if (m > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, m);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
}
return (0);
}
