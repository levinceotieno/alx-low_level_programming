#include "lists.h"
/**
 * free_listint_safe - freeing listint_t list
 * @h: points at the first node of the list
 * Return: The freed size of the list
 */
size_t free_listint_safe(listint_t **h)
{
size_t track = 0;
int comp;
listint_t *tempPTR;
if (h == NULL || *h == NULL)
return (0);
while (*h != NULL)
{
comp = *h - (*h)->next;
if (comp > 0)
{
tempPTR = (*h)->next;
free(*h);
*h = tempPTR;
track++;
}
else
{
free(*h);
tempPTR = NULL;
track++;
break;
}
}
*h = NULL;
return (track);
}

