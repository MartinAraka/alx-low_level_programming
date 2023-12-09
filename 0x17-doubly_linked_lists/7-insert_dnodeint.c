#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given position
 * @h: pointer to list
 * @idx: position to add node
 * @n: data for new node
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp_node = *h, *new_node;
	unsigned int index, count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}

	index = idx - 1;
	while (temp_node && count != index)
	{
		count++;
		temp_node = temp_node->next;
	}

	if (count == index && temp_node)
	{
		new_node->prev = temp_node;
		new_node->next = temp_node->next;
		if (temp_node->next)
			temp_node->next->prev = new_node;
		temp_node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);



}
