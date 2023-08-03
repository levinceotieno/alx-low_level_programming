#include "main.h"
/**
 * print_binary - Printing binary equivalent of a dec num
 * @n: number to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
int i;
int track = 0;
unsigned long int recent;
for (i = 63; i >= 0; i--)
{
recent = n >> i;
if (recent & 1)
{
_putchar('1');
track++;
}
else if (track)
{
_putchar('0');
}
}
if (!track)
{
_putchar('0');
}
}

