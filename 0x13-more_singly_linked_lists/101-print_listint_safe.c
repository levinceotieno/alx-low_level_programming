#include "lists.h"
/**
 * print_listint_safe - Printing listint_t linked list
 * @head: PTR to the first node in the list
 * Return: NUM of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t track = 0;
size_t curr_data;
const listint_t *tempPTR = NULL;
const listint_t *comp = NULL;
tempPTR = head;

while (tempPTR != NULL)
{
printf("[%p] %d\n", (void *)tempPTR, tempPTR->n);
track++;
tempPTR = tempPTR->next;
comp = head;
curr_data = 0;
while (curr_data < track)
{
if (tempPTR == comp)
{
printf("-> [%p] %d\n", (void *)tempPTR, tempPTR->n);
return (track);
}
comp = comp->next;
curr_data++;
}
if (head == NULL)
exit(98);
}
return (track);
}

