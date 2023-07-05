#include "main.h"
/**
 * factorial - finding factorial of n
 * @n: number
 * Return: value of factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else if (n > 1)
return (n * factorial(n - 1));
else
return (n);
}
