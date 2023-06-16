#include <stdio.h>
/**
 * main - main printing the alphabet in lowercase
 * Description: printing alphabets except e and q
 * Return: at 0 (Success)
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; ++a)
{
if (a != 'e' && a != 'q')
{
putchar(a);
}
}
putchar('\n');
return (0);
}
