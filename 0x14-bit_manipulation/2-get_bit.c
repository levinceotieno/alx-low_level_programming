#include "main.h"
/**
 * get_bit - Returning bit value at an index in a dec num
 * @n: Searched Num
 * @index: the bit index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bitValue;
if (index > 63)
return (-1);
bitValue = (n >> index) & 1;
return (bitValue);
}

