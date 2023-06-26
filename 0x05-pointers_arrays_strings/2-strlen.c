#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: input char
 * Return: length of the input string
 */
int _strlen(char *s)
{
int i = 1;
int len = 0;
char l = s[0];
while (l != '\0')
{
len++;
l = s[i++];
}
return (len);
}
