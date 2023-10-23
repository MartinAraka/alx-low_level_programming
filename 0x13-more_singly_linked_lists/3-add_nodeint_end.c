#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of list
 * @head: double pointer to head of list
 * @n: integer value
 *
 * Return: address of new element or NULL if failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_Node, *temp = *head;

	new_Node = malloc(sizeof(listint_t));
	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;
	if (!temp)
		*head = new_Node;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_Node;
	}
	return (new_Node);
}
