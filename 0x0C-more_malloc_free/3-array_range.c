#include <stdlib.h>
#include "main.h"

/**
 * array_range - functions purpose is to create array if integer
 * @max: most val..
 * @min: least val..
 *
 * Return: Pointer to new array (Success)
 * Conditions >>> if min.. > max, return NULL
 * otherwise malloc fails, returns NULL
 */

int *array_range(int min, int max)
{
int f;
int *_ray;

if (min > max)

return (NULL);

_ray = malloc(sizeof(*_ray) * ((max - min) + 1));
if (_ray == NULL)

return (NULL);

for (f = 0; min <= max; f++, min++)
_ray[f] = min;

return (_ray);
}
