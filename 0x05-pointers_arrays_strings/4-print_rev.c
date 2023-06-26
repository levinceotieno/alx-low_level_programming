#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string input
 * rv is to reverse, fwd is to count foward
 * Return: string
 */
void print_rev(char *s)
{
int a, fwd, rv;
for (a = 0; s[a] != '\0'; a++)
{
fwd++;
}
for (rv = (fwd - 1); rv >= 0; rv--)
{
_putchar(s[rv]);
}
_putchar('\n');
}
