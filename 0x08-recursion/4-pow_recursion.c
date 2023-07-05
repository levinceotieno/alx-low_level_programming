#include "main.h"
/**
 * _pow_recursion - search for value of x to the power of y
 * @x: number multipled
 * @y: the power to multipled with
 * Return: x value to power y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y > 0)

return (x * _pow_recursion(x, y - 1));
return (x * _pow_recursion(x, y - 1));
}
