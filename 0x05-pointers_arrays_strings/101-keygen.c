#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - password
 * Return: int 0 (Success)
 */
int main(void)
{
char str[200];
int a = 0, rNum = 0, sm = 0;
srand(time(NULL));
for (a = 0; sm <= 2644; a++)
{
rNum = (rand() % 25) + 65;
str[a] = rNum;
sm = sm + rNum;
}
str[a++] = 2772 - sm;
str[a++] = '\0';
printf("%s\n", str);
return (0);
}
