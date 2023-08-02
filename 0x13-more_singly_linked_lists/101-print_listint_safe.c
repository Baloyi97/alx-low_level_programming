#include "lists.h"
#include <stdint.h>

/**
 * print_listint_safe - Function that prints a linked list with a loop safely.
 * @head: A pointer to the first node of the linked list
 * Return: Num of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *x = NULL;
	size_t counter = 0;
	size_t new;

	tmp_n = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		counter++;
		tmp = tmp->next;
		x = head;
		new = 0;

		while (new < counter)
		{
			if (tmp == x)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (counter);
			}
			x = x->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
