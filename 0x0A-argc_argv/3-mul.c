#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplication of two num
 * @argc: numb of arguemnt
 * @argv: arguement received
 * Return: 1
 */

int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
