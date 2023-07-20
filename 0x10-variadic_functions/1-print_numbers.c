#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - funct finds arg parmetrs
 * @separator: separators
 * @n: Namba
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int h;
va_list est;
va_start(est, n);

for (h = 0; h < n; h++)
{
if (!separator)
printf("%d", va_arg(est, int));
else if (separator && h == 0)
printf("%d", va_arg(est, int));
else
printf("%s%d", separator, va_arg(est, int));
}

va_end(est);
printf("\n");
}
