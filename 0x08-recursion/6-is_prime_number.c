#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: parameter representing integer
 *
 * Return:1 if prime integer
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
