#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Function that concatenates two strings.
 * @s1:First array.
 * @s2: second array.
 * @n: number of letters to copy.
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
	for(i = 0; i < (nmemb * size); i++)
	{
		s[i] = 0;
	}
	return (s);
}
