#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS
#include <stdlib.h>

int _putchar(char a);
void print_name(char *, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
