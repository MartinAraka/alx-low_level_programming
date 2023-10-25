#include "lists.h"

/**
 * reverse_listint - function that reverses linked list
 * @head: double pointer to firtst node to list
 *
 * Return: pointer to first node in reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = NULL;

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = current;
	}
	*head = previous;
	return (*head);

}
