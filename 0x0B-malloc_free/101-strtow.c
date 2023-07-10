#include <stdlib.h>
#include "main.h"
/**
 * count_word - splits a string into words
 * @s: the string
 * Return: NULL if str == NULL or str == ""
 */
int count_word(char *s)
{
int stand = 0, a = 0, b;

for (b = 0; s[b] != '\0'; b++)
{
if (s[b] == ' ')
stand = 0;
else if (stand == 0)
{
stand = 1;
a++;
}
}
return (a);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **mtrxx, *theme;
int g, h = 0, lngth = 0, wds, x = 0, beegin, the_end;

while (*(str + lngth))
lngth++;
wds = count_word(str);
if (wds == 0)
return (NULL);

mtrxx = (char **) malloc(sizeof(char *) * (wds + 1));
if (mtrxx == NULL)
return (NULL);

for (g = 0; g <= lngth; g++)
{
if (str[g] == ' ' || str[g] == '\0')
{
if (x)
{
the_end = g;
theme = (char *) malloc(sizeof(char) * (x + 1));
if (theme == NULL)
return (NULL);

while (beegin < the_end)
*theme++ = str[beegin++];
*theme = '\0';
mtrxx[h] = theme - x;
h++;
x = 0;
}
}
else if (x++ == 0)
beegin = g;
}

mtrxx[h] = NULL;
return (mtrxx);
}
