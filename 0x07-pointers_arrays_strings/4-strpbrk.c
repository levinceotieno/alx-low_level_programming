#include "main.h"
/**
 * _strpbrk - finding first occurence of any accepted byte
 * @s: searched string
 * @accept: the accepted bytes
 * Return: pointer to the 1st occurence of byte
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int a, b;
char *find;

a = 0;
while (s[a] != 0)
{
b = 0;
while (accept[b] != 0)
{
if (s[a] == accept[b])
{
find = &s[a];
return (find);
}
b++;
}
a++;
}
return (0);
}
