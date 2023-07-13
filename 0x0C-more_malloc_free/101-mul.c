#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * _is_zero - checking if any NUMBER is 0
 * @argv: argu v...
 * Return: void
 */
void _is_zero(char *argv[])
{
int w, var_1 = 1, var_2 = 1;
for (w = 0; argv[1][w]; w++)
if (argv[1][w] != '0')
{
var_1 = 0;
break;
}
for (w = 0; argv[2][w]; w++)
if (argv[2][w] != '0')
{
var_2 = 0;
break;
}
if (var_1 == 1 || var_2 == 1)
{
printf("0\n");
exit(0);
}
}
/**
 * _initialize_array - set memery to zero in a new array
 * @ar: char array.
 * @lar: length of the char array.
 * Return: pointer of a char array.
 */
char *_initialize_array(char *ar, int lar)
{
int i = 0;
for (i = 0; i < lar; i++)
ar[i] = '0';
ar[lar] = '\0';
return (ar);
}
/**
 * _checknum - Checking the len of NUMBER...& base 10
 * @argv: argu...v
 * @n: Num of arrays
 * Return: lngth...
 */
int _checknum(char *argv[], int n)
{
int lngth;
for (lngth = 0; argv[n][lngth]; lngth++)
if (!isdigit(argv[n][lngth]))
{
printf("Error\n");
exit(98);
}
return (lngth);
}
/**
 * main - it multiplies 2 +ve numbers...
 * @argc: arg count...
 * @argv: arg vector...
 * Return: Always 0...
 */
int main(int argc, char *argv[])
{
int x_1, x_2, s, sum_1, sum_en, i, j, k, ca;
char *ar_;

if (argc != 3)
printf("Error\n"), exit(98);
x_1 = _checknum(argv, 1), x_2 = _checknum(argv, 2);
_is_zero(argv), s = x_1 + x_2, ar_ = malloc(s + 1);
if (ar_ == NULL)
printf("Error\n"), exit(98);
ar_ = _initialize_array(ar_, s);
k = s - 1, i = x_1 - 1, j = x_2 - 1, ca = sum_en = 0;
for (; k >= 0; k--, i--)
{
if (i < 0)
{
if (sum_en > 0)
{
sum_1 = (ar_[k] - '0') + sum_en;
if (sum_1 > 9)
ar_[k - 1] = (sum_1 / 10) + '0';
ar_[k] = (sum_1 % 10) + '0';
}
i = x_1 - 1, j--, sum_en = 0, ca++, k = s - (1 + ca);
}
if (j < 0)
{
if (ar_[0] != '0')
break;
s--;
free(ar_), ar_ = malloc(s + 1), ar_ = _initialize_array(ar_, s);
k = s - 1, i = x_1 - 1, j = x_2 - 1, ca = sum_en = 0;
}
if (j >= 0)
{
sum_1 = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (ar_[k] - '0') + sum_en;
sum_en = sum_1 / 10, ar_[k] = (sum_1 % 10) + '0';
}
}
printf("%s\n", ar_);
return (0);
}
