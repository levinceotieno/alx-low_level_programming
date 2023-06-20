#include <stdio.h>
/**
 * print_fibonacci - starting with 1 and 2, followed by a new line. *
 * Return: 0 (Success)
*/
void print_fibonacci(void)
{
int prev = 1;
int curr = 2;
printf("%d, %d", prev, curr);
int next;
while (1)
{
next = prev + curr;
if (next < curr)
break;
printf(", %d", next);
prev = curr;
curr = next;
}
printf("\n");
}
/* main - Entry point of the program, calls the print_fibonacci function */
int main(void)
{
print_fibonacci();
return (0);
}
