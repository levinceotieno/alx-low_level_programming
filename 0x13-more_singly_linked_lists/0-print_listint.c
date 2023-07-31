#include "lists.h"
/**
 * print_listint - Printing all the Elements of a listint_t list
 * @h: Pointing to the list to be printed
 * Return: Num of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t track = 0;
while (h != NULL)
{
printf("%d\n", h->n);
track++;
h = h->next;
}
return (track);
}

