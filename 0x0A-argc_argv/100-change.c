#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - mini number of coins to make change
 * @argc: rounds
 * @argv: argumnts
 * Return: 1 on error, if _ve print zero
 */
int main(int argc, char *argv[])
{
int cents, values = 0;
if (argc == 2)
{
cents = atoi(*(argv + 1));
while (cents > 0)
{
if (cents % 25 < cents)
{
cents -= 25;
values++;
}
else if (cents % 10 < cents)
{
cents -= 10;
values++;
}
else if (cents % 5 < cents)
{
cents -= 5;
values++;
}
else if (cents % 2 < cents)
{
cents -= 2;
values++;
}
else if (cents % 1 < cents)
{
cents -= 1;
values++;
}
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", values);
return (0);
}
