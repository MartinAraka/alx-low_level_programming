#include "lists.h"

/**
 * reverse_listint - function that reverses linked list
 * @head: double pointer to first node of linked list
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *current = *head;
	listint_t *previous = NULL;

	while (current != NULL)
	{
		temp = current->next;
		current->next = previous;
		previous = current;
		current = temp;
	}
	*head = previous;
	return (previous);
}
