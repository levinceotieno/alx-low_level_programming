#include "main.h"
/**
 * get_endianness - looks wether machine is little or big endian
 * Return: 0 big, 1 little
 */
int get_endianness(void)
{
unsigned int m = 1;
char *c = (char *) &m;
return (*c);
}

