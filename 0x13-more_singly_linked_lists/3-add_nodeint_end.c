#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head:double pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Step 1: Check if head is NULL and return early if so */
	if (head == NULL)
		return (NULL);

	/* Step 2: Create and initialize the new node */
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/* Step 3: Insert the new node at the end of the list */
	if (*head == NULL)
	{
		/* If the list is empty, make the new node the head */
		*head = new;
	}
	else
	{
		/* Traverse the list to find the last node */
		listint_t *tail = *head;

		while (tail->next)
			tail = tail->next;

		/* Insert the new node at the end */
		tail->next = new;
	}

	/* Step 4: Return the new node */
	return (new);
}
