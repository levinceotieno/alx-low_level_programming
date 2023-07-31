#include "lists.h"
/**
 * get_nodeint_at_index - giving out the node
 * at a certain index in a linked list
 * @head: 1st node in linked list
 * @index: Index of the node returned
 * Return: PTR to the node, or NULL if fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int track = 0;
listint_t *tempPTR = head;
while (tempPTR && track < index)
{
tempPTR = tempPTR->next;
track++;
}
return (tempPTR ? tempPTR : NULL);
}

