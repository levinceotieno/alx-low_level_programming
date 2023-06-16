#include <stdio.h>
/**
 * main - main printing single digit using putchar
 * description: prints all single digit numbers of base 10 starting from 0
 * Return: at 0 (Success)
*/
int main(void)
{
int nmb;
for (nmb = 0; nmb <= 9; ++nmb)
putchar(nmb);
putchar('\n');
return (0);
}
