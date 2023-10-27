#include "main.h"

/**
 * set_bit - function that sets the value of bit to 1
 * @n: pointer to the bit to be modified
 * @index: index of bit
 *
 * Return: 1 if success or -1 if failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}
