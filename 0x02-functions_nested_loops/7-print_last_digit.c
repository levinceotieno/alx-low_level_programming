#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: gets the last digit
 * Description: printing the last digit using _putchar
 * Return: 0 (Success)
*/
int print_last_digit(int n)
/* function implemantation */
{
int lsdgt;
if (n < 0)
n = -n;
lsdgt = n % 10;
if (lsdgt < 0)
lsdgt = -lsdgt;
_putchar(lsdgt + '0');
return (lsdgt);
}
