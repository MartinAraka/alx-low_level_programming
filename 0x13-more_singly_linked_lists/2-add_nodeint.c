#include "lists.h"

/**
 * add_nodeint - function that adds node at the beginning of list
 * @head: double pointer to list
 * @n: integer value
 *
 * Return: address of new element or NULL if failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_Node;

	new_Node = malloc(sizeof(listint_t));

	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = *head;
	*head = new_Node;
	return (new_Node);
}
