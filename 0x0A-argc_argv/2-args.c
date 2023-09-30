#include <stdio.h>

/**
 * main - prints all arguements
 * @argc: counts arguements
 * @argv: contains strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}
