#include "lists.h"

/**
 * print_listint - function that prints all elements of list
 * @h: pointer to the head of list
 *
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
