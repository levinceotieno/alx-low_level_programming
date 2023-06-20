#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 * Description: printing alphabets x10, followed by a new line using _putchar
 * Return: void (Success)
*/
void print_alphabet_x10(void)
/* function implemantation */
{
char a;
char b;
for (b = 0; b < 10; b++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
return;
}
