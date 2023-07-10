#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: Always 0
*/
char *_strdup(char *str)
{
char *p;
int a, b = 0;
if (str == NULL)
return (NULL);
a = 0;
while (str[a] != '\0')
a++;
p = malloc(sizeof(char) * (a + 1));
if (p == NULL)
return (NULL);
for (b = 0; str[b]; b++)
p[b] = str[b];
return (p);
}
