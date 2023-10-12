#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
void print(char *);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, /*size_t*/int size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
