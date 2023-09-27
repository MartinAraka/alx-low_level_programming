#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: parameter for number whose factorial is to be found
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
