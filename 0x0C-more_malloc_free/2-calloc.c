#include "main.h"
#include <stdlib.h>
/**
 * _calloc - it is Allocating memory for array...
 * @nmemb: the record number of elements in an array
 * @size: the bytes size
 * Return: a Pointer to the allocated mem...
 *
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int m;
if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(nmemb * size);
if (arr == NULL)
return (NULL);

for (m = 0; m < (nmemb * size); m++)
arr[m] = 0;
return (arr);
}
