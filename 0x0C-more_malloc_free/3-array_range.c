#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers.
 * @min: Min size.
 * @max: Max size.
 * Return: Return NULL if s and min/max is null.
 **/
int *array_range(int min, int max)
{
	int *s;
	int i, j;

	i = max - min;
	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= (i); j++, min++)
	{
		s[j] = min;
	}
	return (s);

}
