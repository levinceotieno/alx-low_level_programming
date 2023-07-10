#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Pointer to a 2 dimen... array of the int types
 * @width: dim... the WIDthh
 * @height: dim... HEIghtt
 * Return: 2 dimn.. POINTER
 */

int **alloc_grid(int width, int height)
{
int z, y;
int **pnter;

if (width <= 0 || height <= 0)
return (NULL);

pnter = malloc(sizeof(int *) * height);
if (pnter == NULL)
return (NULL);

for (z = 0; z < height; z++)
{
pnter[z] = malloc(sizeof(int) * width);
if (pnter[z] == NULL)
{
for (; z >= 0; z--)
free(pnter[z]);
free(pnter);
return (NULL);
}
}

for (z = 0; z < height; z++)
{
for (y = 0; y < width; y++)
pnter[z][y] = 0;
}
return (pnter);
}
