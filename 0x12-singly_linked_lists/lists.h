#ifndef LIST_H
#define LIST_H

typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);

#endif
