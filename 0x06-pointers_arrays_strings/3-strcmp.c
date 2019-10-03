#include "holberton.h"
/**
 * _strcmp - simulate the way strcmp works.
 * @s1: q = to the s1.
 * @s2: p = to the s2.
 * Return: s1 - s2 or 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
