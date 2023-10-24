#include "lists.h"

/**
 * get_nodeint_at_index - function that returns nth node of list
 * @head: pointer to node of list
 * @index: index of node to be returned
 *
 * Return: index or NULL if fails
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
