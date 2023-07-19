#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vecctoo
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int s;
int x;
char *a;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
s = atoi(argv[1]);
if (s < 0)
{
printf("Error\n");
exit(2);
}
a = (char *)main;
for (x = 0; x < s; x++)
{
if (x  == s - 1)
{
printf("%02hhx\n", a[x]);
break;
}
printf("%02hhx ", a[x]);
}
return (0); 
}

