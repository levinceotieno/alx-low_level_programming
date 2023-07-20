#include "variadic_functions.h"
/**
 * sum_them_all - summation
 * @n: NUM.arg
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int x;
int add = 0;
va_list list;
va_start(list, n);
for (x = 0; x < n; x++)
add += va_arg(list, int);
va_end(list);
return (add);
}
