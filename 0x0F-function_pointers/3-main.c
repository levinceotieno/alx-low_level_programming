#include "3-calc.h"
/**
 * main - main funct, operates simple operat..
 * @argc: NUM Arg.
 * @argv: Arr Arg.
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
char ch;
int aaargmnt1, aaargmnt2;
int the_rslt;

int (*func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}

aaargmnt1 = atoi(argv[1]);
aaargmnt2 = atoi(argv[3]);
func = get_op_func(argv[2]);
if (!func)
{
printf("Error\n");
exit(99);
}

ch = *argv[2];
if ((ch == '/' || ch == '%') && aaargmnt2 == 0)
{
printf("Error\n");
exit(100);
}

the_rslt = func(aaargmnt1, aaargmnt2);
printf("%d\n", the_rslt);
return (0);
}

