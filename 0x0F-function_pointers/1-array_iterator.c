#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator -  executes a function
 * @array: pointer to array of integers
 * @size: length of an array
 * @action: pointer to function
 *
 * Return: -
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
