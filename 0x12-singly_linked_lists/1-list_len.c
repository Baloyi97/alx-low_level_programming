#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns  number of elements in a linked list
 * @h: A pointer to the list_t list
 *
 * Return: Num of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
		h = h->next;

	return (n);
}
