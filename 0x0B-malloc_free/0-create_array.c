#include "main.h"
#include <stdlib.h>
/**
 * create_array - makes array of chararacters, initialized with specific char
 * _putchar - printing of arrays
 * @size: the size of array
 * @c: character thats assigned
 *
 * Return: pointer to the array, if failed return NULL
*/

char *create_array(unsigned int size, char c)
{
char *pointer;
unsigned int w;

pointer = malloc(sizeof(char) * size);
if (size == 0 || pointer == NULL)
return (NULL);

for (w = 0; w < size; w++)
pointer[w] = c;
return (pointer);
}
