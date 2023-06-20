#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: checked sign
 * Description: checks lowercase char, followed by new line using _putchar
 * Return: 1 if c is lowercase, otherwise 0
*/
int print_sign(int n)
/* function implemantation */
{
int v;
if (n > 0)
{
v = 1;
_putchar('+');
}
else if (n == 0)
{
v = 0;
_putchar('0');
}
else
{
v = -1;
_putchar('-');
}
return (v);
}
