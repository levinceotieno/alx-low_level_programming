#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - pointer to the newly allocated space in the memory
 * @str: Character
 * Return: 0 (Success)
*/

char *_strdup(char *str)
{

char *v;
int z, y = 0;

if (str == NULL)
return (NULL);

z = 0;
while (str[z] != '\0')
z++;
v = malloc(sizeof(char) * (z + 1));
if (v == NULL)
return (NULL);

for (y = 0; str[y]; y++)
v[y] = str[y];
return (v);
}
