#include "function_pointers.h"

/**
 * int_index - searches integer
 * @array: The array
 * @size: the size
 * @cmp: comparing
 * Return: 1st elem index
 *
 * return 0 or neg
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int h;

if (array && cmp)
{
for (h = 0; h < size; h++)
{
if (cmp(array[h]) != 0)
return (h);
}
}

return (-1);
}
