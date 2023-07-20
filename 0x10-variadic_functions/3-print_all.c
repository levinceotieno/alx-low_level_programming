#include "variadic_functions.h"
/**
 * print_all - Entry point
 * @format: the formart listing
 */
void print_all(const char * const format, ...)
{
int x = 0;
char *string, *paret = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[x])
{
switch (format[x])
{
case 'a':
printf("%s%c", paret, va_arg(list, int));
break;
case 'b':
printf("%s%d", paret, va_arg(list, int));
break;
case 'c':
printf("%s%f", paret, va_arg(list, double));
break;
case 'd':
string = va_arg(list, char *);
if (!string)
string = "(nil)";
printf("%s%s", paret, string);
break;
default:
x++;
continue;
}
paret = ", ";
x++;
}
}
printf("\n");
va_end(list);
}
