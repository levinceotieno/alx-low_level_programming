#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - anything is printed
 * @format: arg
 */

void print_all(const char * const format, ...)
{
int y = 0;
char *str, *sep = "";
va_list est;
va_start(est, format);

if (format)
{
while (format[y])
{
switch (format[y])
{
case 'c':
printf("%s%c", sep, va_arg(est, int));
break;

case 'i':
printf("%s%d", sep, va_arg(est, int));
break;

case 'f':
printf("%s%f", sep, va_arg(est, double));
break;

case 's':
str = va_arg(est, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
y++;
continue;
}
sep = ", ";
y++;
}
}
printf("\n");
va_end(est);
}
