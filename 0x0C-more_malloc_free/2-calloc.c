#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Function that allocates memory for an array, using malloc.
 * @nmemb: Number of members.
 * @size: Size.
 * Return: Return NULL if str and s1/s2 is null.
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb <= 0)
	{
		return (NULL);
	}
	if (size <= 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		s[i] = 0;
	}
	return (s);
}
