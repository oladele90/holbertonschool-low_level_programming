#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *Return: on success 1 and on error -1
 */

int _putchar(int);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
#endif
