#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints the name
 * @name: the name being printed
 * @f: PTRR 2 the printing func...
 */
void print_name(char *name, void (*f)(char *)) 
{ 
if (!name || !f) 
return;

f(name);
}

