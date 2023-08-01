#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a linked list
 * @head: double pointer to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	if (!head)
		return (NULL);

	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
