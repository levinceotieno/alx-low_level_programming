#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - funct checks adding nnode
 *
 * @head: dabo ppoiinterr
 * @str: SRINNG
 * Return: ADDED NNODEE
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *size;
list_t *j = *head;

unsigned int len = 0;

while (str[len])
len++;/* itterration */
size = malloc(sizeof(list_t));
if (!size)
return (NULL);

size->str = strdup(str);
size->len = len;
size->next = NULL;
if (*head == NULL)
{
*head = size;
return (size);
}

while (j->next)
j = j->next;
j->next = size;
return (size);
}

