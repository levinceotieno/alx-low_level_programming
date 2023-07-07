#include "main.h"
/**
 * prime_check - checks if a number is prime number
 * @n: checked number
 * @j: number that is checked against
 * Return: if prime 1, otherwise 0
 */
int prime_check(int n, int j)
{
if (n % j == 0 && j != (n / 2))
return (0);
else if (j >= (n / 2))
return (1);
else
return (prime_check(n, j + 1));
}
/**
 * is_prime_number - finding prime number
 * @n: number checked
 * Return: 1 prime, 0 otherwise
 */

int is_prime_number(int n)
{
if (n > 1)
return (prime_check(n, 2));
else if (n < 0)
return (0);
return (0);
}

