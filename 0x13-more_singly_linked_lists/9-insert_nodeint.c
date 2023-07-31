#include "lists.h"
/**
 * insert_nodeint_at_index - Inserting a new node at specified position
 * @head: PTR to the 1st node of the list
 * @idx: the Index of the list where the new node is  added
 * @n: data to put in the new node
 * Return: Address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int track = 0;
listint_t *NEWnode, *tempPTR;
if (head == NULL)
return (NULL);
NEWnode = malloc(sizeof(listint_t));
if (NEWnode == NULL)
return (NULL);
NEWnode->n = n;
NEWnode->next = NULL;
if (idx == 0)
{
NEWnode->next = *head;
*head = NEWnode;
return (NEWnode);
}
tempPTR = *head;
while (tempPTR != NULL && track < idx - 1)
{
tempPTR = tempPTR->next;
track++;
}
if (tempPTR == NULL)
{
free(NEWnode);
return (NULL);
}
NEWnode->next = tempPTR->next;
tempPTR->next = NEWnode;
return (NEWnode);
}

