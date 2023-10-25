#include "lists.h"

/**
 * insert_nodeint_at_index - fumction that inserts node at given position
 * @head: double pointer to first node of list
 * @idx: index where node is added
 * @n: data to insert new node
 *
 * Return: address of new node or NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_Node;
	listint_t *pos = *head;

	new_Node = malloc(sizeof(listint_t));
	if (!new_Node || !head)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;

	if (idx == 0)
	{
		new_Node->next = *head;
		*head = new_Node;
	}
	return (new_Node);

	for (i = 0; pos && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_Node->next = pos->next;
			pos->next = new_Node;
			return (new_Node);
		}
		else
			pos = pos->next;

	}
	return (NULL);
}
