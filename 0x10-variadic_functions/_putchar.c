#include <unistd.h>
/**
 * _putchar - does the printing
 * Return: int
*/
int _putchar(char c)
{
return write(1, &c, 1);
