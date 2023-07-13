#include "main.h"
#include <stdlib.h>
/**
 * _realloc - it is reallocating a memory block using malloc and free
 * @ptr: this is a Pointer to the mem... that was allocated b4
 * @old_size: the size of the mem.. in bytes previously allocated
 * @new_size: this is the new size in bytes
 * Return: the POINTER to the allocated mem...
 *
 * new_size > old_size, the “added” memory should not be initialized
 * new_size == old_size do not do anything and return ptr
 * if ptr is NULL, then the call is equivalent to malloc(new_size)...
 * ...for all values of old_size and new_size
 * new_size == 0, and ptr is not NULL, then the call is equivalent to free(ptr)
 * ...return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
ptr = malloc(new_size);
if (new_size == old_size)
return (ptr);
free(ptr);

ptr = malloc(new_size);
return (ptr);
}
