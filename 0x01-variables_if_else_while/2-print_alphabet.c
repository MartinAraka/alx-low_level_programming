#include <stdio.h>
/**
 * main - main function that prints alphabet
 *
 * Return: 0 when succesful
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
