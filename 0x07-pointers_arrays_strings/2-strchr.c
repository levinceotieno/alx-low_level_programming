#include "main.h"
/**
 * _strchr - Find given char in a string
 * @s: the string
 * @c: the char being searched
 * Return: Pointer to first instance of c
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
else
s++;
}
if (*s == c)
return (s);
else
return ('\0');
}
