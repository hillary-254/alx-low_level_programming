#ifndef LIST_H
#define LIST_H
/**
 * struct list - singly linked list
 * @str: string - malloc assigned string
 * @len: length of string
 * @next: points to next node
 * Description: singly linked list node structure
 */
typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
