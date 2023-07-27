#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 * @head: Double pointer to the list_t list
 * @str: Str to put in new node
 * Return: Addr of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	unsigned int len = strlen(str);

	/* Allocate memory */
	list_t *new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	/* Copy the input string into the new node */
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = NULL;

	/* If empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Find the last node and append the new node */
	list_t *temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
