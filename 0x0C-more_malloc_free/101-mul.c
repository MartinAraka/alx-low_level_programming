#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two
 * positive numbers
 * @argc: number of elements
 * @argv: number of arrays
 *
 * Return: multiplication result
 */

int main(int argc, char *argv[])
{
	int i;
	int num1, num2;
	int result;
	char *num1_str = argv[1];
	char *num2_str = argv[2];

	if (argc != 3)
	{
		printf("Usage: %s <num1> <num2>\n", argv[0]);
		return (98);
	}

	for (i = 0; num1_str[i] != '\0'; i++)
	{
		if (num1_str[i] < 48 || num1_str[i] > 57)
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; num2_str[i] != '\0'; i++)
	{
		if (num2_str[i] < 48 || num2_str[i] > 57)
		{
			printf("Error\n");
			return (98);
		}
	}

	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
