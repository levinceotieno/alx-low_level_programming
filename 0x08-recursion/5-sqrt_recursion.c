#include "main.h"
/**
 * sqrt_check - finding sqr root
 * @i: the number whose sqr root is searched
 * @j: number checked if it's sqr root of n
 * Return: value of square root
 */
int sqrt_check(int i, int j)
{
if (j * j == i)
{
return (j);
}
else if (j >= i / 2)
return (-1);
return (sqrt_check(i, j + 1));
}
/**
 * _sqrt_recursion - finding sqr root of given number
 * @n: number to find root
 * Return: sqr root or -1 if no natural sqr root
 */
int _sqrt_recursion(int n)
{
if (n == 1)
return (1);
else if (n < 0)
return (-1);
else if (n == 0)
return (0);
return (sqrt_check(n, 1));
}

