#include "lists.h"
#include <stdlib.h>

/**
 * free_list - single list free
 *
 * @head: lisst
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *j;

while (head)/* condition check */
{
j = head->next;
free(head->str);
free(head);/* freeing mem */

head = j;/* equating */
}
}

