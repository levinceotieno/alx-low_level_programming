#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - the main func
 * @array: ARRAY
 * @size: the_size
 * @action: 2 funct ptr
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;

if (!array || !action)
return;
for (a = 0; a < size; a++)
action(array[a]);
}
