#include "lists.h"

/**
 * free_listint_safe - Frees a linked list
 * @h: A pointer to the first node in the linked list
 * Return: Num of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		current = *h;
		next = (*h)->next;

		if ((void *)current <= (void *)next)
		{
			free(current);
			len++;
			break;
		}
		free(current);
		len++;
		*h = next;
	}
	*h = NULL;
	return (len);
}
