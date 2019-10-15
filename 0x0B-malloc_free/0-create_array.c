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
	int j;
	char *i;

	if (size == 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(char) * c);
	if (i == NULL)
        {
                return (NULL);
        }
	for (j = 0; j < size; j++)
	{
		(i + j) = c;
	}
	return (i);
}
