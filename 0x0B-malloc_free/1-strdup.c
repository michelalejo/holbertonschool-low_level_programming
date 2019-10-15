#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a newly allocated in memory.
 * @str:  Size of the array.
 * Return: Return NULL if str and s is null
 **/
char *_strdup(char *str)
{
	int j, i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
		j++;
	s = malloc(sizeof(char) * (j + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
