#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocatss memory using malloc function
 * @b: shows Numbaa of the bytes thats allocate..d
 * Return: A POINTER TO MEMORY ALLOCT
 * conditions >>> if malloc fails,
 * the malloc_checked function should cause normal process termination
 * with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
char *vvarr;
vvarr = malloc(b);

if (vvarr == NULL)
exit(98);
return (vvarr);
}
