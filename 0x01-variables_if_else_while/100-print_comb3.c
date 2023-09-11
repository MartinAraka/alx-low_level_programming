#include <stdio.h>

/**
 * main - main block
 * Description - Program that prints possible combinations of two digits.
 * Numbers must be separated by (,), followed by a ( )
 * You can only use the 'putchar' function
 * You can only use putchar five times
 *
 * Return: 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x != y && x < y)
			{
				putchar('0' + x);
				putchar('0' + y);
				if (x < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
