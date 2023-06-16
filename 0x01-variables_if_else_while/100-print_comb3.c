#include <stdio.h>
/**
 * main - main prints all possible different combinations
 * Description: prints all possible combinations of two digits numbers
 * Return: at 0 (Success)
*/
int main(void)
{
int i, j;
for (i = 0; i < 10; ++i)
{
for (j = i + 1; j < 10; ++j)
{
putchar(i + '0');
putchar(j + '0');
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
