#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: where string goes
 * @src: stringsource
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
char *rtrn = dest;
while (*src)
{
*dest++ = *src++;
*dest = 0;
}
return (rtrn);
}
