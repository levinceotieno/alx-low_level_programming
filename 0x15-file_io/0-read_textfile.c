#include "main.h"
#include <stddef.h>
/**
 * read_textfile - Read & print text file to the standard output
 * @filename: filename
 * @letters: Namba of letters that are printed
 * Return: Namba of letters Read & printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int Tfile, we_read, wreite;
char *buff;
buff = malloc(sizeof(*buff) * (letters + 1));
if (filename == NULL || buff == NULL)
{
free(buff);
return (0);
}
Tfile = open(filename, O_RDONLY);
if (Tfile == -1)
return (0);
we_read = read(Tfile, buff, letters);
if (we_read == -1)
return (0);
buff[we_read] = '\0';
wreite = write(STDOUT_FILENO, buff, we_read);
if (wreite != we_read)
return (0);
free(buff);
close(Tfile);
return (we_read);
}

