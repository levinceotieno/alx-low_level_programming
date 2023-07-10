#include <stdlib.h>
#include "main.h"

/**
 * argstostr - its Concatenating all the arguments of the program...
 * @ac: Integer Input
 * @av: double type array pointerrr
 *
 * Return: 0 (Success)
 */

char *argstostr(int ac, char **av)
{

int z, y, x = 0, w = 0;
char *char_string;

if (ac == 0 || av == NULL)
return (NULL);

for (z = 0; z < ac; z++)
{
for (y = 0; av[z][y]; y++)
w++;
}

w += ac;
char_string = malloc(sizeof(char) * w + 1);
if (char_string == NULL)
return (NULL);

for (z = 0; z < ac; z++)
{
for (y = 0; av[z][y]; y++)
{
char_string[x] = av[z][y];
x++;
}

if (char_string[x] == '\0')
{
char_string[x++] = '\n';
}
}

return (char_string);
}
