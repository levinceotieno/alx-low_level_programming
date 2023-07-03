#include <stdio.h>
/**
 * print_diagsums - printing sums of the two diagnols of the matrix
 * @a: matrix
 * @size: length of arrays
 */
void print_diagsums(int *a, int size)
{
int x;
int sum_1, sum_2;
int lgth;

x = 0;
sum_1 = sum_2 = 0;
lgth = size * size;
while (x < lgth)
{
if (x % (size - 1) == 0 && x < lgth - 1 && x > 0)
sum_2 += *(a + x);
if (x % (size + 1) == 0 || x == 0)
sum_1 += *(a + x);
x++;
}
printf("%d, %d\n", sum_1, sum_2);
}
