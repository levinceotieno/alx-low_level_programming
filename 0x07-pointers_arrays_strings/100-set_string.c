#include <stdio.h>
/**
 * set_string - setting the value of a pointer to a character
 * @s: the pointer to the pointer being checked
 * @to: pointer to what it's being set to
 */
void set_string(char **s, char *to)
{
*s = to;
}
