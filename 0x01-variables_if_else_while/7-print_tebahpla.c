#include <stdio.h>

/**
 * main - main block/ entry point
 * Description - Prints the lowercase alphabet in reverse,
 * followed by a new line.
 * You can only use the 'putchar' to print to the console
 * You can only use 'putchar' twice
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
