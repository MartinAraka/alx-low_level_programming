#include "main.h"
#include <stdio.h>

/**
 * guess - funtion that allows _sqtr_recursion
 * @j: parameter of integer whose square root to find
 * @k: parameter of integer to guess
 *
 * Return: -1 if not int
 */

int guess(int j, int k)
{
	int sqrt;

	sqrt = (k * k);
	if (sqrt == j)
		return (k);
	else if (sqrt < j)
		return (guess(j, k + 1));
	else
		return (-1);

}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer parameter
 *
 * Return: square root of integer
 */

int _sqrt_recursion(int n)
{
	return (guess(n, 1));
}
