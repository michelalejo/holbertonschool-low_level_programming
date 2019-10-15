#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars.
 * @size:  Size of the array.
 * @c: Value of the array.
 * Return : Return NULL if is 0/fail.
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *i;

	if (size == 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(char) * size);
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		*(i + j) = c;
	}
	return (i);
}
