#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: COUNTS OF ARGUE
 * @argv: VECTOR
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
char *str;
int y, x;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

y = atoi(argv[1]);
if (y < 0)
{
printf("Error\n");
exit(2);
}

str = (char *)main;
for (x = 0; x < y; x++)
{
if (x  == y - 1)
{
printf("%02hhx\n", str[x]);
break;
}
printf("%02hhx ", str[x]);
}

return (0);
}

