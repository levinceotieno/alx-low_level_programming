#include "lists.h"
/**
 * listint_len - Print num of elements in a linked listint_t list
 * @h: Pounting to the list
 * Return: Namba of elements in the list
 */
size_t listint_len(const listint_t *h)
{
size_t track = 0;
while (h != NULL)
{
track++;
h = h->next;
}
return (track);
}

