#include "main.h"
#include <stddef.h>
/**
 * _strlen - for Counting the str length
 * @str: string
 * Return: the length of str
 */
int _strlen(char *str)
{
int length = 0;
while (str[length] != '\0')
length++;
return (length);
}

/**
 * create_file - file creation
 * @filename: nming file
 * @text_content: content of file
 * Return: 1 (success), else -1
 */
int create_file(const char *filename, char *text_content)
{
int Tfile, wreite;
if (filename == NULL)
return (-1);
Tfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (Tfile == -1)
return (-1);
if (text_content != NULL)
{
wreite = write(Tfile, text_content, _strlen(text_content));
if (wreite == -1)
{
return (-1);
}
close(Tfile);
return (1);
}
else
{
close(Tfile);
return (1);
}
}

