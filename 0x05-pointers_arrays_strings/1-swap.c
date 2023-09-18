#include "main.h"

/**
 * swap_int - function that swaps values of two integers
 * @a: value1
 * @b: value2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
