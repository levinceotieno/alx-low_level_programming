#include "lists.h"
/**
 * add_nodeint - Add new node at the Beginning of a listint_t list
 * @head: Double PTR to list
 * @n: New integer 2 be added in the node
 * Return: Adress of the new element, else NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *NEWnode;
NEWnode = malloc(sizeof(listint_t));
if (!NEWnode)
return (NULL);
NEWnode->n = n;
NEWnode->next = *head;
*head = NEWnode;
return (NEWnode);
}

