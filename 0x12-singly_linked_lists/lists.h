#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Represent a singly linked list node
 * @str: String - A pointer to allocate string(malloc'ed string)
 * @len: Represent the length of the string (unsigned integer)
 * @next:A point to the next node (points to list_t)
 * Description:It is a singly linked list node structure
 * For Holberton project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/****** FUNCTION DECLARATION OF THE LINKED LIST ***** */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
