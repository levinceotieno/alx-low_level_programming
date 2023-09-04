#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - copies one file 2 another
 * @argc: arg count
 * @argv: arg vector
 * Return: 1 (success), else exit
 */
int main(int argc, char *argv[])
{
int src, dest, we_read = 1024, wreite, closesrc, closedest;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char buff[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
exit(97);
}
src = open(argv[1], O_RDONLY);
check_IO_stat(src, -1, argv[1], 'O');
dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
check_IO_stat(dest, -1, argv[2], 'W');
while (we_read == 1024)
{
we_read = read(src, buff, sizeof(buff));
if (we_read == -1)
check_IO_stat(-1, -1, argv[1], 'O');
wreite = write(dest, buff, we_read);
if (wreite == -1)
check_IO_stat(-1, -1, argv[2], 'W');
}
closesrc = close(src);
check_IO_stat(closesrc, src, NULL, 'C');
closedest = close(dest);
check_IO_stat(closedest, dest, NULL, 'C');
return (0);
}

/**
 * check_IO_stat - Checking if a file can be opened or closed
 * @stat: file descriptor of opened file
 * @filename: filename
 * @mode: close or open
 * @fd: file descriptor
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
if (mode == 'C' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
else if (mode == 'O' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
else if (mode == 'W' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}

