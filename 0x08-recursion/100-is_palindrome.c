#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - counts length of string
 * @s: parameter for string to be counted
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}

/**
 * check1 - base function for is_palindrome
 * @str: parameter for string
 * @len: parameter for length of string
 * @count: parameter for count of string
 *
 * Return: length of string
 */
int check1(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (check1(str, len - 1, count + 1));
	return (0);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string to be checked
 *
 * Return: 1 if is palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (check1(s, len - 1, count));
}


