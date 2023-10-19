#include "lists.h"

/**
 * list_len - function that counts total number of elements
 * @h: linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h)
	{
		h = h->next;
		element_count++;
	}
	return (element_count);
}
