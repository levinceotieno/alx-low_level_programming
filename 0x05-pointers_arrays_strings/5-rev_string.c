#include "main.h"
/**
 * rev_string - reverses a string
 * @s: reversed input
 * Return: string, in reverse
 */
void rev_string(char *s)
{
int counter = 0;
char rev = s[0];
int a;
while (s[counter] != '\0')
counter++;
for (a = 0; a < counter; a++)
{
counter--;
rev = s[a];
s[a] = s[counter];
s[counter] = rev;
}
}
