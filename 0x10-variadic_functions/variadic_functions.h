#ifndef _VAR_FUNCT
#define _VAR_FUNCT_
#include <stdio.h>
#include <stdarg.h>
void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif