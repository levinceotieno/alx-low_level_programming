#include "lists.h"
#include <stdio.h>
/**
 * print_list - entire eleemennts
 * @h: poinnter
 * Return: NuM
 */
size_t print_list(const list_t *h)/* entry point */
{
size_t size = 0;/* init a var to keep track */

while (h)/* loop thru the list until 'h' */
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;/* move to nxt node */
size++;/* increment to count the current node */
}

return (size);/* Return the total number of nodes in the linked list */
}

