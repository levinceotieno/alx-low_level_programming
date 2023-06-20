#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: this is the character checked
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
