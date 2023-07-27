#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - ADDING NNODE
 *
 * @head: DDOUUBLE pointrr
 * @str: a sttrinng
 * Return: ptr head
 *
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *size;

unsigned int len = 0;
while (str[len])
len++;
size = malloc(sizeof(list_t));
if (!size)
return (NULL);

size->str = strdup(str);
size->len = len;
size->next = (*head);
(*head) = size;
return (*head);
}

