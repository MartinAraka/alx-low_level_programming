#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer to string's separator
 * @n: number of arguements
 *
 * Return:-
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(nums);
	printf("\n");
}
