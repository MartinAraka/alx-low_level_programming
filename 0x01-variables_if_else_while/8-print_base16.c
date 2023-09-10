#include <stdio.h>

/**
 * main - main block/ entry
 * Description - program that prints all numbers of base 16 in lowercase
 * You can only use the 'putchar' function
 * You can only use putchar three times
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
