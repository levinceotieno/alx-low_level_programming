#include <stdio.h>
/**
 * printing the alphabet in lowercase
 * description: alphabets
 * Return: at 0 (Success)
*/
int main(void)
{
char alphabets;
for (alphabets = 'a'; alphabets <= 'z'; ++alphabets)
putchar(alphabets);
putchar('\n');
return (0);
}
