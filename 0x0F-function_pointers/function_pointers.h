#include <stdlib.h>
#ifndef FUNCT_PTR_
#define FUNCT_PTR_
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif

