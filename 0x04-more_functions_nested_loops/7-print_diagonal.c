#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times character '\' will be printed
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				_putchar('_');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
