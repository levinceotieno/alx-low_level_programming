#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - the funct concats 2 str
 * @s2: 2nd str
 * @s1: 1st str
 * @n: n show the numba of bytes allocated
 * Return: memory allocated pointer
 * conditions >>> the function fails, return NULL
 * n >= length of s2... use the whole str s2
 * if NULL is passed, == empty str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int bt, bt2, h, k;
char *tni;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (bt = 0; s1[bt] != '\0'; bt++)
;
for (bt2 = 0; s2[bt2] != '\0'; bt2++)
;
if (n > bt2)
n = bt2;
h = bt + n;
tni = malloc(h + 1);
if (tni == NULL)
return (NULL);
for (k = 0; k < h; k++)
if (k < bt)
tni[k] = s1[k];

else
tni[k] = s2[k - bt];
tni[k] = '\0';
return (tni);
}
