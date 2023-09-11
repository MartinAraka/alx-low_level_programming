#include <stdio.h>

/**
 * main - main block/ main entry
 * Description -  program that prints single-digit numbers.
 * Numbers must be separated by (,) and a space
 * You can only use the putchar function
 * You can only use putchar four times
 * You are not allowed to use any variable of type char
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
