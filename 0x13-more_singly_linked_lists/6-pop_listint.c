#include "lists.h"

/**
 * pop_listint - function that deletes head node of list
 * @head: pointer to listint_t
 * @n: integer value
 *
 * Return 0 if success
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head != NULL)
	{
		temp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = temp;
	}
	return (n);
}
