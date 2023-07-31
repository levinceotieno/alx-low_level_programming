#include "lists.h"
/**
 * reverse_listint - Reversing linked list
 * @head: PTR 2 the first node in the linked list
 * Return: PTR 2 the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_data = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev_data;
prev_data = *head;
*head = next;
}
*head = prev_data;
return (*head);
}

