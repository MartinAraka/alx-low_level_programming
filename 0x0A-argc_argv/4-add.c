#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguements
 * @argv: array of strings of arguements
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	(void) argv;
	sum = 0;
	if (argc != 1)
	{
		for (i = 0; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
