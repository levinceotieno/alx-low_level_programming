#include <stdio.h>
/**
 * main - main print first 50 fibonacci
 * Description: listing all neutral numbers
 * Return: 0 (Success)
*/
int main(void)
{
unsigned long int s3, s5, s;
int i;
s3 = 0;
s5 = 0;
s = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0)
{
s3 = s3 + i;
}
else if ((i % 5) == 0)
{
s5 = s5 + i++;
}
}
s = s3 + s5;
printf("%lu\n", s);
return (0);
}
