#ifndef THE_LISTS_H
#define THE_LISTS_H
#include <stddef.h>
/**
 * struct listS_ - function shows Singly Linked List
 * @string: Str
 * @next: Pnting the nxt node
 * @len: the len of Str
 * Description - singly linked lists
 */
typedef struct listS_
{
char *str;
unsigned int len;
struct listS_ *next;
} list_t;
void free_list(list_t *head);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif

