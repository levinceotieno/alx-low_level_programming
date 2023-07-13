#include "main.h"
#include <stdlib.h>
/**
 * array_range - the function creates array of ints
 * @min: the MIN_VALUE
 * @max: the MAX_VALUE
 * Return: the Pointer of new array
 *
 * Incase minimum > maximum, return NULL...
 * else if malloc fails, returns NULL...
 */

int *array_range(int min, int max)
{
int *the_array, v;

if (min > max)
return (NULL);

the_array = malloc(sizeof(*the_array) * ((max - min) + 1));
if (the_array == NULL)
return (NULL);

for (v = 0; min <= max; v++, min++)
the_array[v] = min;
return (the_array);
}
