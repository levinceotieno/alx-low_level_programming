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
unsigned int h;
int plus = 0;
va_list est;
va_start(est, n);

for (h = 0; h < n; h++)
plus += va_arg(est, int);
va_end(est);

return (plus);
}
