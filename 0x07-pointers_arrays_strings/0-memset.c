#include "main.h"
/**
 * _memset - it fills the n bytes of the memory
 * @s: this is the area pointed to
 * @b: the byte to fill with
 * @n: the amount
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
a = 0;
while (a < n)
{
s[a] = b;
a++;
}
return (s);
}
