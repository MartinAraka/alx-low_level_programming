#include <studio.h>
/**
 * main - Printing memory sizes
 *
 * Return: 0 if true
 */

init main(void)
{
	printf("Size of char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)" sizeof(long int));
	printf("Size of a long long int: %lu byte(s)" sizeof(long long int));
	printf("Size of a float: %lu byte(s)" sizeof(float));
	return (0);
}
