#include "main.h"

/**
 * islower function - function that checks for lowercase character.
 * @c: parameter to be checked
 *
 * Return: 1 0r 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
