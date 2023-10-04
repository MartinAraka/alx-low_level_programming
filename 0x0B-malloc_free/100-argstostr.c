#include "main.h"

/**
 * argstostr - concatenates them into a single string
 * @ac: number of arguements
 * @av: array of arguements
 *
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j = 0;
	int totlen = 0;
	char *newstr;


	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		totlen += strlen(av[i]) + 1;
	}

	newstr = malloc(sizeof(char) * (totlen + 1));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcpy(newstr + j, av[i]);
		j += strlen(av[i]);
		newstr[j] = '\n';
		j++;
	}
	newstr[totlen] = '\0';
	return (newstr);
}
