#include "main.h"
/**
 * _memcpy - it copies n bytes of memory area src to area dest
 * @dest: the memory to copy to
 * @src: the memory we copy from
 * @n: the amount we copy from memmory area
 * Return: the pointer to memmory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
a = 0;
while (a < n)
{
dest[a] = src[a];
a++;
}
return (dest);
}
