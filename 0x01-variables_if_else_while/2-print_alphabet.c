#include <stdio.h>
/**
 * main - contain the block
 * Description: printing alphabets in upper and lowercase
 * Return: Always 0 (Success)
*/
int main(void)
{
char letter = 'a';
while (letter <= 'Z')
{
putchar(letter);
if (letter == 'z')
{
letter = 'A';
}
else
{
letter++;
}
}
putchar('\n');
return (0);
}
