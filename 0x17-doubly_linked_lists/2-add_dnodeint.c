#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning
 * @head: pointer to first element
 * @n: to set in new node
 *
 * Return: address of new element or NULL if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
