#include "main.h"
/**
 * binary_to_uint - Convert binary num to unsigned int
 * @b: STR contains the binary num
 * Return: the num converted
 */
unsigned int binary_to_uint(const char *b)
{
int count;
unsigned int decimal = 0;
if (!b)
return (0);
for (count = 0; b[count]; count++)
{
if (b[count] < '0' || b[count] > '1')
return (0);
decimal = 2 * decimal + (b[count] - '0');
}
return (decimal);
}

