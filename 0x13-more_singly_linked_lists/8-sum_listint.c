#include "lists.h"

/**
 * sum_listint - function that returns sum of all data of list
 * @head:  pointer to node of the list
 *
 * Return: sum or 0 if fail
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *pos = head;

	while (pos)
	{
		sum += pos->n;
		pos = pos->next;
	}
	return (sum);
}
