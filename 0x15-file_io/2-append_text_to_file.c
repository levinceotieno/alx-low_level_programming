#include "main.h"
#include <stddef.h>
/**
 * _strlen - counting the str length
 * @str: string
 * Return: the length of the string
 */
int _strlen(char *str)
{
int length = 0;
while (str[length] != '\0')
length++;
return (length);
}

/**
 * append_text_to_file - appends text at end of a line
 * @filename: name of file
 * @text_content: content appended
 * Return: 1 (success), else  -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int Tfile, wreite;
if (filename == NULL)
return (-1);
Tfile = open(filename, O_WRONLY | O_APPEND);
if (Tfile == -1)
return (-1);
if (text_content != NULL)
{
wreite = write(Tfile, text_content, _strlen(text_content));
if (wreite == -1)
{
close(Tfile);
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

