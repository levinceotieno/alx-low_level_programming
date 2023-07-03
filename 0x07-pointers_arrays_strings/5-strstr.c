#include "main.h"
/**
 * _strstr - finding the 1st occuring of a string in another string
 * @haystack: the string being searched thru
 * @needle: the string being searched
 * Return: pointer to the beginning of string
 */
char *_strstr(char *haystack, char *needle)
{
char *begin;
char *s;
while (*haystack != '\0')
{
begin = haystack;
s = needle;
while (*s == *haystack && *haystack != 0
&& *s != 0)
{
haystack++;
s++;
}
if (*s == 0)
return (begin);
haystack = begin + 1;
}
return (0);
}
