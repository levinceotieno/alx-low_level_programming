#include "variadic_functions.h"
/**
 * print_numbers - parametre
 * @separator: STR
 * @n: num
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list stat;
va_start(stat, n);
for (x = 0; x < n; x++)
{
if (!separator)
printf("%d", va_arg(stat, int));
else if (separator && x == 0)
printf("%d", va_arg(stat, int));
else
printf("%s%d", separator, va_arg(stat, int));
}
va_end(stat);
printf("\n");
}
