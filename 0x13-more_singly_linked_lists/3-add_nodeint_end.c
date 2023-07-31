#include "lists.h"
/**
 * add_nodeint_end - Adding new node
 * @head: Double PTR to the list
 * @n: New integer Added in the node
 * Return: Address of the new element, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *NEWnode, *tempPTR;
NEWnode = malloc(sizeof(listint_t));
if (NEWnode == NULL)
return (NULL);
NEWnode->n = n;
NEWnode->next = NULL;
if (*head == NULL)
{
*head = NEWnode;
return (NEWnode);
}
tempPTR = *head;
while (tempPTR->next != NULL)
tempPTR = tempPTR->next;
tempPTR->next = NEWnode;
return (NEWnode);
}

