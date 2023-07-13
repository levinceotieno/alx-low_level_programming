#include <stdlib.h>
#include "main.h"

/**
 * _realloc - The funct.. reallocates memory block
 * ...using malloc and free
 *
 * @old_size: size of bytes previous allocated Memory
 * @new_size: size of bytes new allocated Memory
 * @ptr: the Pointer to Memory prev.. allocated
 * Return: its POINTER to new allc.. Memory
 *
 * Conditions >>> new_size greater than old_size...
 * ...“added” memory shouldn't be initialized
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (ptr != NULL && new_size == 0)
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
