#include "function_pointers.h"
/**
 * int_index - seeks forr int
 * @array: The array
 * PTR being compared
 * Return: Index of 1st  element
 * return 0 or -1 if no match / size = -ve
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (array && cmp)
{
for (x = 0; x < size; x++)
{ 
if (cmp(array[x]) != 0)
return (x);
}
}
return (-1);
}

