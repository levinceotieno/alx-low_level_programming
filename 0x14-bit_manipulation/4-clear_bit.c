#include "main.h"
/**
 * clear_bit - it Set the value of a given bit to 0
 * @n: Points to the number to change
 * @index: index of the bit
 * Return: 1 (success), -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}

