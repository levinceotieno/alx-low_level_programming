#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - this function do allocation of memory using malloc
 * @b: the numb... of bytes allocated
 * Return: Pointer to the memory allocated
 *
 * if malloc fails, the malloc_checked function should...
 * cause normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
char *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
