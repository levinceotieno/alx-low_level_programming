#include "lists.h"
/**
 * free_listint - Freeing the listint_t list Memory
 * @head: Pointing  at the list to be freed
 * Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *tempPTR;
while (head != NULL)
{
tempPTR = head;
head = head->next;
free(tempPTR);
}
}

