#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints name
 * @name: pointer to character
 * @f: pointer to function
 *
 * Return: -
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}

