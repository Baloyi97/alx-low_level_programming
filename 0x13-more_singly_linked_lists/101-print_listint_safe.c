#include "lists.h"
#include <stdint.h>

/**
 * print_listint_safe - Function that prints a linked list with a loop safely.
 * @head: A pointer to the first node of the linked list
 * Return: Num of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *loop_node = NULL;
	size_t counter = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		counter++;
		current = current->next;
		loop_node = head;

		for (size_t i = 0; i < counter; i++)
		{
			if (current == loop_node)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (counter);
			}
			loop_node = loop_node->next;
		}
			if (!head)
			exit(98);
	}

	return (counter);
}
