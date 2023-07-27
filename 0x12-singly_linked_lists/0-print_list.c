#include "lists.h"
#include <stdio.h>


/**
 * print_list - whole Elemntss of the args
 * @h: PTR
 *
 *
 * Return: NUM size
 */
size_t print_list(const list_t *h)/* entry point */
{
size_t size = 0;
while (h)
{
if (!h->str)/* condition */
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
size++;/* itteration */
}
return (size);
}

