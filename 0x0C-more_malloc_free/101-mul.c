#include <stdlib.h>
#include "main.h"
#define ERR_MSG "Error"
#include <stdio.h>
/**
 * is_digit - whether a string includes a character that is not a digit
 * @s: STR
 * Return: 0 if a non-digit character is detected, 1 otherwise
 */
int is_digit(char *s)
{
int z = 0;
while (s[z])
{
if (s[z] < '0' || s[z] > '9')
return (0);
z++;
}
return (1);
}
/**
 * _strlen - returns len
 * @s: str
 * Return: length
 */
int _strlen(char *s)
{
int a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
/**
 * errors - detect error
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - multiplies 2 +ve num..
 * @argc: count
 * @argv: vecto,,
 * Return: 0
 */
int main(int argc, char *argv[])
{
int lgth1, lgth2, lgth, j, kat, dgt_i, dgt_j, *outcome, f = 0;
char *str1, *str2;

str1 = argv[1], str2 = argv[2];
if (argc != 3 || !is_digit(str1) || !is_digit(str2))
errors();
lgth1 = _strlen(str1);
lgth2 = _strlen(str2);
lgth = lgth1 + lgth2 + 1;
outcome = malloc(sizeof(int) * lgth);
if (!outcome)
return (1);
for (j = 0; j <= lgth1 + lgth2; j++)
outcome[j] = 0;
for (lgth1 = lgth1 - 1; lgth1 >= 0; lgth1--)
{
dgt_i = str1[lgth1] - '0';
kat = 0;
for (lgth2 = _strlen(str2) - 1; lgth2 >= 0; lgth2--)
{
dgt_j = str2[lgth2] - '0';
kat += outcome[lgth1 + lgth2 + 1] + (dgt_i *dgt_j);
outcome[lgth1 + lgth2 + 1] = kat % 10;
kat /= 10;
}
if (kat > 0)
outcome[lgth1 + lgth2 + 1] += kat;
}
for (j = 0; j < lgth - 1; j++)
{
if (outcome[j])
f = 1;
if (f)
_putchar(outcome[j] + '0');
}
if (!f)
_putchar('0');
_putchar('\n');
free(outcome);
return (0);
}
