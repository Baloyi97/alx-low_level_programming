#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the element that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (0);

	const int deleted_data = (*head)->n;
	listint_t *temp = (*head)->next;

	free(*head);
	*head = temp;

	return (deleted_data);
}
