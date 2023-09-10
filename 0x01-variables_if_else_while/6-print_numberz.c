#include <stdio.h>

/**
 * main - main block/ entry point
 * Description -  Prints all single digit numbers of base 10 starting from 0.
 * You are not allowed to use any variable of type 'char'
 * You can only use the 'putchar' to print  to the console
 * You can only use putchar twice
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
