#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes node at given index in list
 * @head: double pointer to node of list
 * @index: index of node to delete
 *
 * Return: 1 if success or -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pos = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(pos);
		return (1);
	}

	while (i < index - 1)
	{
		if (!pos || !(pos->next))
			return (-1);
		pos = pos->next;
		i++;
	}

	current = pos->next;
	pos->next = current->next;
	free(current);
	return (1);
}


