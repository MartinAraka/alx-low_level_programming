#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: pointer to number to be modified
 * @index: index of bit
 *
 * Return: 1 for success or -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}
