#include "main.h"
/**
 * _strlen_recursion - finding length of string
 * @s: string finding length of
 * Return: length
 */
int _strlen_recursion(char *s)
{
int l;
l = 0;
if (*s != 0)
{
l++;
return (l + _strlen_recursion(s + 1));
}
return (l);
}
/**
 * pal_check - check palindrome
 * @s: string checked
 * @l: length of str
 * Return: if palindrome 1, 0 otherwise
 */

int pal_check(char *s, int l)
{
if (l <= 1)
return (1);
if (*s != s[l - 1])
return (0);
else
return (pal_check((s + 1), (l - 2)));
}
/**
 * is_palindrome - check a palindrome
 * @s: string checked
 * Return: 1 palindrome, if otherwise 0
 */

int is_palindrome(char *s)
{
int l;
l = _strlen_recursion(s);
if (l <= 1)
return (1);
return (pal_check(s, l));
}
