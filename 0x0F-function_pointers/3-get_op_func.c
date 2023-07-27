#include "3-calc.h"
/**
 * get_op_func - chooses the right operation to perform
 * @s: oparators
 * Return: pointer
 */

int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int h;
h = 0;

while (ops[h].op)
{
if (strcmp(ops[h].op, s) == 0)
return (ops[h].f);
h++;
}

return (NULL);
}

