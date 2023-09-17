#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: number with last digit
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{

	int l = n % 10;

	if (n < 0)
	{
		l = -l;
	_putchar(l + '0');
	}
	return (l);
}
