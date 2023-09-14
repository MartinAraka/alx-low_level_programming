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

	if (l > 0)
	{
		_putchar(l);
		return (l);
	}
	else
	{
		_putchar(-l);
		return (-l);
	}
}
