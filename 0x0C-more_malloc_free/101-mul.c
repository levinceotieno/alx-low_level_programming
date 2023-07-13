#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _is_zero - entry...looks for 0
 * @argv: vecto,,,
 * Return: (void)
 */

void _is_zero(char *argv[])
{
int k, m = 1, n = 1;
for (k = 0; argv[1][k]; k++)
if (argv[1][k] != '0')
{
m = 0;
break;
}
for (k = 0; argv[2][k]; k++)
if (argv[2][k] != '0')
{
n = 0;
break;
}
if (m == 1 || n == 1)
{
printf("0\n");
exit(0);
}
}
/**
 * _initialize_array - it is setting the new memory = 0
 *
 * @lar: LENGTH..
 * @ar: ARRAY
 * Return: POINTER (Success)
 */
char *_initialize_array(char *ar, int lar)
{
int v = 0;
for (v = 0; v < lar; v++)
ar[v] = '0';
ar[lar] = '\0';
return (ar);
}
/**
 * _checknum - LENGTH & base 10 of number
 * @argv: vecto,,,
 * @n: ARRAY NUMBER
 * Return: LENGTH
 */
int _checknum(char *argv[], int n)
{
int lennn;
for (lennn = 0; argv[n][lennn]; lennn++)
if (!isdigit(argv[n][lennn]))
{
printf("Error\n");
exit(98);
}
return (lennn);
}
/**
 * main - 2 +ve numbss being multiplied
 * @argc: number of counts
 * @argv: vecto,,,
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int r1, r2, s, plus, LH, y1, y22, y333, randmm;
char *str;

if (argc != 3)
printf("Error\n"), exit(98);
r1 = _checknum(argv, 1), r2 = _checknum(argv, 2);
_is_zero(argv), s = r1 + r2, str = malloc(s + 1);
if (str == NULL)
printf("Error\n"), exit(98);
str = _initialize_array(str, s);
y333 = s - 1, y1 = r1 - 1, y22 = r2 - 1, randmm = LH = 0;
for (; y333 >= 0; y333--, y1--)
{
if (y1 < 0)
{
if (LH > 0)
{
plus = (str[y333] - '0') + LH;
if (plus > 9)
str[y333 - 1] = (plus / 10) + '0';
str[y333] = (plus % 10) + '0';
}
y1 = r1 - 1, y22--, LH = 0, randmm++, y333 = s - (1 + randmm);
}
if (y22 < 0)
{
if (str[0] != '0')
break;
s--;
free(str), str = malloc(s + 1), str = _initialize_array(str, s);
y333 = s - 1, y1 = r1 - 1, y22 = r2 - 1, randmm = LH = 0;
}
if (y22 >= 0)
{
plus = ((argv[1][y1] - '0') * (argv[2][y22] - '0')) + (str[y333] - '0') + LH;
LH = plus / 10, str[y333] = (plus % 10) + '0';
}
}
printf("%s\n", str);
return (0);
}
