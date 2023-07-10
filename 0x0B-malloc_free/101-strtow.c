#include "main.h"
#include <stdlib.h>

/**
 * count_word - it is spliting a string into words...
 * @s: this is the Stringg
 *
 * Return: NULL if str == NULL or str == ""
 */
int count_word(char *s)
{

int int_signn = 0;
int z = 0;
int y;

for (y = 0; s[y] != '\0'; y++)
{

if (s[y] == ' ')
int_signn = 0;

else if (int_signn == 0)
{
int_signn = 1;
z++;
}
}

return (z);
}
/**
 * **strtow - it Splits a string down to words...
 * @str: String to be splitted
 *
 * Return: pointer to an array of strings or NULL (Error)
 */

char **strtow(char *str)
{
char **mmaattrriixx_, *shows_tmp;
int k;
int j = 0;
int string_length = 0;
int f = 0;
int the_words, Begginn, _ending;

while (*(str + string_length))
string_length++;
the_words = count_word(str);
if (the_words == 0)
return (NULL);
mmaattrriixx_ = (char **) malloc(sizeof(char *) * (the_words + 1));
if (mmaattrriixx_ == NULL)
return (NULL);
for (k = 0; k <= string_length; k++)
{
if (str[k] == ' ' || str[k] == '\0')
{
if (f)
{
_ending = k;
shows_tmp = (char *) malloc(sizeof(char) * (f + 1));
if (shows_tmp == NULL)
return (NULL);
while (Begginn < _ending)
*shows_tmp++ = str[Begginn++];
*shows_tmp = '\0';
mmaattrriixx_[j] = shows_tmp - f;
j++;
f = 0;
}
}
else if (f++ == 0)
Begginn = k;
}
mmaattrriixx_[j] = NULL;
return (mmaattrriixx_);
}
