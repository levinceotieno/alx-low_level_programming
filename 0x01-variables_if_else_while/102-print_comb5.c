#include <stdio.h>
/**
 * main - main prints all possible different combinations of two two-digit numbers.
 * Description: prints all 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
 * Return: at 0 (Success)
*/
int main(void)
{
int i, j;
int w, x, y, z;
for (i = 0; i < 100; ++i)
{
w = i / 10;
x = i % 10;
for (j = 0; j < 100; ++j)
{
y = j / 10;
z = j % 10;
if (w < y || (w == y && x < z))
{
putchar(w + '0');
putchar(x + '0');
putchar(32);
putchar(y + '0');
putchar(z + '0');
if (!(w == 9 && y == 8))
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);    
}
