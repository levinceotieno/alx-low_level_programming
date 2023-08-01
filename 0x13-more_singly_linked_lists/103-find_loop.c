#include "lists.h"
/**
 * find_listint_loop - looks for the loop in a linked list
 * @head: Points at the first node of the list
 * Return: the Address of the node where the loop begins
 * ekse NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *pre = head;
listint_t *post = head;
if (head == NULL)
return (NULL);

while (post != NULL && pre != NULL && pre->next != NULL)
{
pre = pre->next->next;
post = post->next;
if (pre == post)
{
post = head;
while (post != pre)
{
post = post->next;
pre = pre->next;
}
return (pre);
}
}
return (NULL);
}

