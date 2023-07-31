#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: PTR to the first node of the linked list
 * Return: sum of all the data (n) of a listint_t linked list
 * or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int added = 0;
listint_t *tempPTR;
if (head == NULL)
return (0);
tempPTR = head;
while (tempPTR != NULL)
{
added += tempPTR->n;
tempPTR = tempPTR->next;
}
return (added);
}

