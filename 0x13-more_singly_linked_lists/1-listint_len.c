#include "lists.h"

/**
 * listint_len - funtions that returns number of elemts in linked list
 * @h: pointer to head of node
 *
 * Return: 0 if successful
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
