#include "variadic_functions.h"
/**
 * print_strings - it PRINTING THE STR
 * @separator: separator
 * @n: num of ARG
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
char *string;
va_list list;
va_start(list, n);
for (x = 0; x < n; x++)
{
string = va_arg(list, char *);
if (!string)
string = "(nil)";
if (!separator)
printf("%s", string);
else if (separator && x == 0)
printf("%s", string);
else
printf("%s%s", separator, string);
}
printf("\n");
va_end(list);
}
