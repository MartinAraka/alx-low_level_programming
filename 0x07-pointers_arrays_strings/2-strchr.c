#include "main.h"
#include <stdio.h>

/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to location or 'NULL' if failure
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
