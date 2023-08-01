#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: linked list  to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		num++;
	}
	return (num);
}
