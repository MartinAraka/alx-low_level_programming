#include "main.h"

/**
 *  _atoi - function that convert a string to an integer
 *  @s: the string to be converted
 *
 *  Return: value of the string otherwise 0
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int i = 1;
	int j = 0;
	int k = 0;

	while (s[k])
	{
		if (s[k] == 45)
			i *= -1;

		while (s[k] >= 48 && s[k] <= 57)
		{
			j = 1;
			num = (i * 10) + (s[k] - '0');
			k++;

		}

		if (j == 1)
			break;

		k++;


	}
	num *= i;
	return (num);


}
