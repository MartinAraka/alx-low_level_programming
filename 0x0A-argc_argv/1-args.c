#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguements passed
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);

}
