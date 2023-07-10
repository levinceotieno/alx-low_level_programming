#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input1
 * @s2: input2
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
char *add;
int a, b;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
a = b = 0;
while (s1[a] != '\0')
a++;
while (s2[b] != '\0')
b++;
add = malloc(sizeof(char) * (a + b + 1));
if (add == NULL)
return (NULL);
a = b = 0;
while (s1[a] != '\0')
{
add[a] = s1[a];
a++;
}
while (s2[b] != '\0')
{
add[a] = s2[b];
a++, b++;
}
add[a] = '\0';
return (add);
}
