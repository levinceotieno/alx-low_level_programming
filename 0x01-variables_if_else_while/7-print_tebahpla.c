#include <stdio.h>
/**
 * main - main printing the alphabet in reverse
 * Description: Alphabets are reversed from z to a
 * Return: at 0 (Success)
*/
int main(void)
{
char alphabets;
for (alphabets = 'z'; alphabets >= 'a'; --alphabets)
putchar(alphabets);
putchar('\n');
return (0);
}
