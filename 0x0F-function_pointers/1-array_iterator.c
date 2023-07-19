#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - runs a fucnt giveeen as paramtr..
 * @array: Array
 * @size: Array size
 * @action: PTR 2 the funct..
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (!array || !action) 
return;
for (i = 0; i < size; i++)
action(array[i]);
}

