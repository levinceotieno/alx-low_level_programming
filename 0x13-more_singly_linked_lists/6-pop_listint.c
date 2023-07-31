#include "lists.h"
/**
 * pop_listint - Deleting the head node of a listint_t linked list
 * @head: Double PTR 2 the first element in the list
 * Return: Head node data (n) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *tempPTR;
if (!head || !*head)
return (0);
data = (*head)->n;
tempPTR = (*head)->next;
free(*head);
*head = tempPTR;
return (data);
}

