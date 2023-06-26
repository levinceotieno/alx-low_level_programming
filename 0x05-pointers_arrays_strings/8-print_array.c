#include "main.h"
#include <stdio.h>

/**
 * print_array - number of items in an array of integers
 * @a: array
 * @n: number of items from the array
 * Return: Nothing
 */
void print_array(int *a, int n)
{
int y;
for (y = 0; y < n; y++)
{
printf("%d", *(a + y));
if (y != n - 1)
printf(", ");
}
putchar('\n');
}
