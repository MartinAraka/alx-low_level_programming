#include "main.h"

/**
 * _islower - function that checks for lower case character
 * @c: parameter to be checked for
 *
 * Return: 1 if succesful or 0 if failure
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
