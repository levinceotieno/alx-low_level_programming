#include "main.h"
/**
 * _strlen_recursion - finding length of string
 * @s: string finding length of
 * Return: length
 */
int _strlen_recursion(char *s)
{
int len;
len = 0;
if (*s != 0)
{
len++;
return (len + _strlen_recursion(s + 1));
}
return (len);
}
/**
 * pal_check - check palindrome
 * @s: string checked
 * @len: length of str
 * Return: if palindrome 1, 0 otherwise
 */

int pal_check(char *s, int len)
{
if (len <= 1)
return (1);
if (*s != s[len - 1])
return (0);
else
return (pal_check((s + 1), (len - 2)));
}
/**
 * is_palindrome - check a palindrome
 * @s: string checked
 * Return: 1 palindrome, if otherwise 0
 */

int is_palindrome(char *s)
{
int len;
len = _strlen_recursion(s);
if (len <= 1)
return (1);
return (pal_check(s, len));
}

