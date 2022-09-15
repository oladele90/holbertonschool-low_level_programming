/*
 *File: 6-size.c
 *Author: Oladele M
 */
#include<stdio.h>
/**
 *main - Prints size of types
 *Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %i byte(s)\n", (int)sizeof(a));
printf("Size of an int: %i byte(s)\n", (int)sizeof(b));
printf("Size of a long int: %i byte(s)\n", (int)sizeof(c));
printf("Size of a long long int: %i byte(s)\n", (int)sizeof(d));
printf("Size of a float: %i byte(s)\n", (int)sizeof(e));
return (0);
}
