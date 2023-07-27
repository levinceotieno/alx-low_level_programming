#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function prints string
 * @separator: sep
 * @n: number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int y;
char *a;
va_list est;
va_start(est, n);

for (y = 0; y < n; y++)
{
a = va_arg(est, char *);
if (!a)
a = "(nil)";
if (!separator)
printf("%s", a);
else if (separator && y == 0)
printf("%s", a);
else
printf("%s%s", separator, a);
}

printf("\n");
va_end(est);
}
