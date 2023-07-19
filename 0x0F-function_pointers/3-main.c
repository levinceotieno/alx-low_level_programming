#include "3-calc.h"
/** 
 * main - main funct, operates simple operat..
 * @argc: NUM Arg.
 * @argv: Arr Arg.
 * Return: 0 (Success)
 */ 
 int main(int argc, char *argv[]) 
 { 
int arg_1, arg_2;
int outcome;
char q;
int (*func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
arg_1 = atoi(argv[1]);
arg_2 = atoi(argv[3]);
func = get_op_func(argv[2]);
if (!func)
{
printf("Error\n");
exit(99);
}
q = *argv[2];
if ((q == '/' || q == '%') && arg_2 == 0)
{
printf("Error\n");
exit(100);
}
outcome = func(arg_1, arg_2);
printf("%d\n", outcome);
return (0);
}

