#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the input integer
 * @av: array pointer of double type
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
int a, b, m = 0, n = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
n++;
}
n += ac;
str = malloc(sizeof(char) * n + 1);
if (str == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
str[m] = av[a][b];
m++;
}
if (str[m] == '\0')
{
str[m++] = '\n';
}
}
return (str);
}
