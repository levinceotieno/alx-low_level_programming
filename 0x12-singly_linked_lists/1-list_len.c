#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Printing namba of elem..
 * @h: Ptr
 * Return: namba of elem..
 */
size_t list_len(const list_t *h)
{
size_t t = 0;
while (h)
{
t++;
h = h->next;
}
return (t);
}

