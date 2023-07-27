#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A new nodeis added at the beginning of a linked list
 * @head: A double pointer to the list_t
 * @str: String to add in the node
 * Return: Addr of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	if (!str)
		return (NULL);

	size_t len = 0;
	const char *tmp = str;

	while (*tmp++)
		len++;

	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
