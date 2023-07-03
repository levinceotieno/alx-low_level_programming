#include "main.h"
/**
 * _strspn - Find length of string that consists only of chosen bytes
 * @s: String to search
 * @accept: The acceptable bytes string can contain
 * Return: lgth
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a, lgth, b, x;
a = lgth = 0;
while (s[a] != 0)
{
b = 0;
x = 0;
while (accept[b] != 0)
{
if (s[a] != accept[b])
{
b++;
}
else if (s[a] == accept[b])
{
x++;
lgth++;
b++;
}
}
if (x == 0)
return (lgth);
a++;
}
return (lgth);
}
