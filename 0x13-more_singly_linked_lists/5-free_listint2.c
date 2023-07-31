#include "lists.h"
/**
 * free_listint2 - Freeing listint_t list
 * @head: Double PTR 2 the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *tempPTR;
while (*head != NULL)
{
tempPTR = *head;
*head = (*head)->next;
free(tempPTR);
}
*head = NULL;
}

