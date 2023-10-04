#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string
 *
 * Return: pointer to new s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int count = 0;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	if (s1 != NULL)
	{
	for (i = 0; s1[i] != '\0'; i++)
		count++;
	}
	if (s2 != NULL)
	{
	for (j = 0; s2[j] != '\0'; j++)
		count++;
	}

	conc = malloc(sizeof(char) * (count + 1));

	if (conc == NULL)
		return (NULL);
	if (s1 != NULL)
	{
	for (i = 0; s1[i] != '\0'; i++)
		conc[i] = s1[i];
	}
	if (s2 != NULL)
	{
	for (j = 0; s2[j] != '\0'; j++)
		conc[i + j] = s2[j];
	}


	return (conc);
}
