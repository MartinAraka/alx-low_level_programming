#include "lists.h"

/**
 * dlistint_len - returns number of elements
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
