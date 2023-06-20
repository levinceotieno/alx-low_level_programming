#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by new line
 * Description: printing alphabets, followed by a new line using _putchar
 * Return: 0 (Success)
*/
void print_alphabet(void)
{
/* function implemantation */
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
return;
}
