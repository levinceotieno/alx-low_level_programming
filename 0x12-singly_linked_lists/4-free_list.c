#include "lists.h"
#include <stdlib.h>
/**
 * free_list - funct.. free linked list
 * @head: the list freed
 * Return: void
 */
void free_list(list_t *head)
{
list_t *m;
while (head)
{
m = head->next;
free(head->str);
free(head);
head = m;
}
}

