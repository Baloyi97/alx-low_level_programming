#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: A double pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	/*Set head to NULL only if it is not already NULL*/
	if (*head != NULL)
		*head = NULL;
}
