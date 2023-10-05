#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: range of integer
 * @max: range of integer
 *
 * Return: pointer to integer
 */

int *array_range(int min, int max)
{
	int *output;
	int i;

	if (min > max)
		return (NULL);

	output = malloc((max - min + 1) * sizeof(int));

	if (output == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		output[i] = min + 1;
	}
	return (output);

}
