#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/** 
 * main - working on negative or positive
 * Description - fetch for a random number and print it
 * Return: 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else 
{
printf("%d is zero", n);
}
return (0);
}