#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function allocates array memory
 *
 * @size: bytes
 * @nmemb: Element namba
 * Return: POINTER
 * Condition >>> nmemb or size == 0, _calloc returns NULL
 * also incase malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int j;
char *k;

if (nmemb == 0 || size == 0)
return (NULL);

k = malloc(nmemb * size);

if (k == NULL)
return (NULL);

for (j = 0; j < (nmemb * size); j++)
k[j] = 0;

return (k);
}
