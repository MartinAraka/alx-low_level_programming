#include "main.h"

/**
 * is_prime_check - returns 1 if integer input is a prime number
 * @n: parameter for integer
 * @i: parameter for integer
 *
 * Return: 1 if integer is a prime number
 */

int is_prime_check(int n, int i)
{
	if (i > n / 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_check(n, i + 2));

}

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: parameter representing integer
 *
 * Return:1 if prime integer
 */

int is_prime_number(int n)
{
	int i = 3;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (is_prime_check(n, i));
}
