#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list
 * @h: A pointer to the list_t list to print
 * Return: Number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		const char *str = (h->str) ? h->str : "(nil)";
		const unsigned int len = (h->str) ? h->len : 0;

		printf("[%u] %s\n", len, str);
		h = h->next;
		s++;
	}

	return (s);
}

