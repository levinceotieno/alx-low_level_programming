#include <stdio.h>
/**
 * main - printing all arguments that it receives
 * @argc: numb
 * @argv: arguement
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
