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
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, i, k, a;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		n = j;
	}
	s = malloc(sizeof(*s) * (i + n + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (a = 0; a < n; a++)
	{
		s[i + a] = s2[a];
	}
	s[i + a] = '\0';
	return (s);
}
