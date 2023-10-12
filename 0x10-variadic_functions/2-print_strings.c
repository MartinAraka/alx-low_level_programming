#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: pointer to string to be printed
 * @n: number of strings passed
 *
 * Return:-
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list prnt;

	if (separator == NULL)
		separator = "";

	va_start(prnt, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(prnt, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(prnt);
	printf("\n");
}
