#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - addition
 * @n: namba of argments
 * @...: arg that helps calc the sum
 * Return: if n == 0 - 0 otherwise sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list est;
unsigned int y;
int sum = 0;

if (n == 0)
{
return (0);
}
va_start(est, n);
for (y = 0; y < n; y++)
{
sum += va_arg(est, int);
}
va_end(est);
return (sum);
}
