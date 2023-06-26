#include "main.h"

/**
 * _atoi - Find and print the first number in a string as an int
 * @s: String to convert to int
 *
 * Return: The int
 */
int _atoi(char *s)
{
int a, b, c;
a = b = c = 0;
while (*(s + a) != '\0')
{
if (*(s + a) == '-')
c++;
if (*(s + a) >= '0' && *(s + a) <= '9')
{
while (*(s + a) >= '0' && *(s + a) <= '9')
{
if (b == 0)
{
b = (b * 10) + (*(s + a) -'0');
b *= -1;
}
else
b = (b * 10) - (*(s + a) -'0');
a++;
}
if (c % 2 == 0)
b *= -1;
return (b);
}
a++;
}
return (0);
}
