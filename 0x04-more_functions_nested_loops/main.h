#ifndef HEAD_H
#define HEAD_H
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *Return: on success 1 and on error -1
 */

int _putchar(int);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
