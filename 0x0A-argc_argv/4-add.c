#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds +ve numb
 * @argc: argu numb
 * @argv: recev argu
 * Return: 1 else 0 if no numb passed
 */

int main(int argc, char *argv[])
{
int add;
int rounds;
int y;
rounds = 1;
add = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (rounds < argc)
{
for (y = 0; argv[rounds][y] != '\0'; y++)
{
if (!(isdigit(argv[rounds][y])))
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[rounds]);
rounds++;
}
printf("%d\n", add);
return (0);
}
