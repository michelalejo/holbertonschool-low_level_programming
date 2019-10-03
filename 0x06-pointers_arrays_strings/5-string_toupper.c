#include "holberton.h"
/**
 * reverse_array - reverses an array of integers
 * @a: takes in an array
 * @n: takes in an integer
 */
char *string_toupper(char *a)
{
	int b;

	for (b = 0; a[b] != '\0'; b++)
	{
		if (a[b] >= 'a' && a[b] <= 'z')
		{
			a[b] = a[b] - 32;
		}
	}		
	return (0);
}
