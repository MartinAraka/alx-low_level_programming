#include "main.h"

/**
 * _strstr -  locates a substring.
 * @haystack: pointer to character in main string
 * @needle: pointer to character in substring
 *
 * Return: pointer to result string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0 ; haystack[i] != '\0' ;  i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[i + j] != needle[j])
					break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');
}
