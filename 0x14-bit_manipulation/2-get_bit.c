#include "main.h"

/**
 * get_bit - function that returns value of bit at given index
 * @n: number from which bit is extracted
 * @index: index  of bit
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
