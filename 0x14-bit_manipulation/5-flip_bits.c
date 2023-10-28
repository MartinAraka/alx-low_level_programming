#include "main.h"

/**
 * flip_bits -  returns the number of bits
 * @n: unsigned long integer parameter to compare and find the number of bit
 * @m: another unsigned long integer parameter to compare with n
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int counter = 0;

	while (result)
	{
		counter += result & 1;
		result = result >> 1;
	}
	return (counter);
}
