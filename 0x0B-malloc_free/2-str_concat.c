#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenating 2 strings
 * @s1: first input
 * @s2: second input
 * Return: string s2 concat with string s1
 */

char *str_concat(char *s1, char *s2)
{
char *summation;
int m, n;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
m = n = 0;
while (s1[m] != '\0')
m++;
while (s2[n] != '\0')
n++;

summation = malloc(sizeof(char) * (m + n + 1));
if (summation == NULL)
return (NULL);

m = n = 0;
while (s1[m] != '\0')
{
summation[m] = s1[m];
m++;
}

while (s2[n] != '\0')
{
summation[m] = s2[n];
m++, n++;
}

summation[m] = '\0';
return (summation);
}
