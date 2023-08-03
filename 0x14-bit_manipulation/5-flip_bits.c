#include "main.h"
/**
 * flip_bits - Counting num of bits to change
 * from 1 to another
 * @n: 1st num
 * @m: 2nd num
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i;
int track = 0;
unsigned long int recent;
unsigned long int fav = n ^ m;
for (i = 63; i >= 0; i--)
{
recent = fav >> i;
if (recent & 1)
track++;
}
return (track);
}

