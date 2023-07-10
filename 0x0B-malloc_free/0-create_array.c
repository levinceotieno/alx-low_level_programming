#include "main.h"
#include <stdlib.h>
/**
 * _putchar - creates an array of chars, init with specific char
 * @size: size
 * @c: assigned char
 * Return: pointer to array, if failed NULL
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int a;

arr = malloc(sizeof(char) * size);
if (size == 0 || arr == NULL)
return (NULL);
for (a = 0; a < size; a++)
arr[a] = c;
return (arr);
}
