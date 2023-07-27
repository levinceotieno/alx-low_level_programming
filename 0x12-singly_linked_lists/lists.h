#ifndef MY_LISTSH__
#define MY_LISTSH__

#include <stddef.h>
/**
 * struct we_list - works on ssingly Llinked lList
 *
 * @str: the string
 * @next: the nxt noode
 * @len: lengthh
 *
 * Description - the funct
 */

typedef struct we_list
{
char *str;
unsigned int len;
struct we_list *next;
} list_t;
size_t print_list(const list_t *h);
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
#endif

