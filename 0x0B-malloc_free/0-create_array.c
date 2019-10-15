#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
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
