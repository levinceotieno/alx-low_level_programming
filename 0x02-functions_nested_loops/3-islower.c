#include "main.h"
/**
 * int _islower(int c) - checks for lowercase character
 * Description: checks lowercase char, followed by new line using _putchar
 * Return: 1 if c is lowercase, otherwise 0
*/
int _islower(int c)
/* function implemantation */
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
