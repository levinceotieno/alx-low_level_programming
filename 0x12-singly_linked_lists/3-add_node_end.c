#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - NEW NODE Added
 * @head: Doubl PTR
 * @str: The STR
 * Return: New Elem..
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *t;
list_t *m = *head;
unsigned int len = 0;
while (str[len])
len++;
t = malloc(sizeof(list_t));
if (!t)
return (NULL);
t->str = strdup(str);
t->len = len;
t->next = NULL;
if (*head == NULL)
{
*head = t;
return (t);
}
while (m->next)
m = m->next;
m->next = t;
return (t);
}

