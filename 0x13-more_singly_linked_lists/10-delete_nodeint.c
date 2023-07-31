#include "lists.h"
/**
 * delete_nodeint_at_index - Deleting a node in a linked list
 * at a certain index
 * @head: PTR 2 the first element in the list
 * @index: Index of the node to be deleted
 * Return: one, or -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tempPTR = *head;
listint_t *curr_data = NULL;
unsigned int track = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(tempPTR);
return (1);
}
while (track < index - 1)
{
if (!tempPTR || !(tempPTR->next))
return (-1);
tempPTR = tempPTR->next;
track++;
}
curr_data = tempPTR->next;
tempPTR->next = curr_data->next;
free(curr_data);
return (1);
}

