#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenation of 2 strings...
 * @s1: String 1
 * @s2: String 2 the one being concat...
 * @n: the bytes number
 * Return: the Pointer to the mem... allocated
 *
 * if the function fails, it should return NULL
 * if n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
unsigned int g1, g2, counter_a, z;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (g1 = 0; s1[g1] != '\0'; g1++)
;
for (g2 = 0; s2[g2] != '\0'; g2++)
;
if (n > g2)
n = g2;
counter_a = g1 + n;
a = malloc(counter_a + 1);
if (a == NULL)
return (NULL);

for (z = 0; z < counter_a; z++)
if (z < g1)
a[z] = s1[z];
else
a[z] = s2[z - g1];
a[z] = '\0';
return (a);
}
