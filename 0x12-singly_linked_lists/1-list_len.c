#include "lists.h"
#include <stdlib.h>

/**
 * list_len - main funct prrrnts num size
 * @h: Ptr
 * Return: NUM size
 */

size_t list_len(const list_t *h)
{
size_t size = 0;

while (h)/* condition */
{
size++;/* itterration */

h = h->next;
}
return (size);
}

