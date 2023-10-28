#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return:-
 */

int get_endianness(void)
{
	unsigned int i = i;

	if (*(char *)&i)
		return (1);
	return (0);
}


