#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - freing 2 dimn... grid previously created by alloc_grid
 * @grid: the 2nd.. grid
 * @height: HEIIghht of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
{
free(grid[x]);
}
free(grid);
}
