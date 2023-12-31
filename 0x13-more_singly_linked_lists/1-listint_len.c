#include "lists.h"

/**
 * listint_len - return number of elements in a linked list
 * @h: linked list of type listint_t
 *
 * Return: num of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num;

	for (num = 0; h; h = h->next)
	{
		num++;
	}
	return (num);
}
