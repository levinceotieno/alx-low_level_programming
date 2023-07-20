#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - addition
 * @n: namba of argments
 * @...: arg that helps calc the sum
 *
 * Return: the resulting addition
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int h;
int plus = 0;
va_list list;
va_start(list, n);
for (h = 0; h < n; h++)
plus += va_arg(list, int);
va_end(list);
return (plus);
}
