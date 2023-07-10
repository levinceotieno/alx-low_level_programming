#ifndef _MAIN_H_

#define _MAIN_H_

char **strtow(char *str);
int _putchar(char c);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
char *_strdup(char *str);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *create_array(unsigned int size, char c);

#endif