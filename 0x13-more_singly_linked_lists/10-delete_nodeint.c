#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a certain index
 * @head: A pointer to the first element in the list
 * @index: Index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *to_delete;
	unsigned int i;

	if (!head || *head == NULL)
		return (-1);

	if (index == 0)
	{
		to_delete = *head;
		*head = (*head)->next;
		free(to_delete);
		return (1);
	}

	temp = *head;
	for (i = 0; temp && i < index - 1; i++)
		temp = temp->next;

	if (temp && temp->next)
	{
		to_delete = temp->next;
		temp->next = temp->next->next;
		free(to_delete);
		return (1);
	}
	return (-1);
}
