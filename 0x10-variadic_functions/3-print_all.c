#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: types of arguments to be printed
 *
 * Return:-
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf(i == 0 ? "%c" : ", %c", va_arg(args, int));
				break;
			case 'i':
				printf(i == 0 ? "%d" : ", %d", va_arg(args, int));
				break;
			case 'f':
				printf(i == 0 ? "%f" : ", %f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf(i == 0 ? "%s" : ", %s", str);
				break;
			default:
				i++;
				continue;

		}
		i++;
	}
	va_end(args);

	printf("\n");

}
