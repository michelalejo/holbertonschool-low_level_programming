#include "holberton.h"
/**
 * _strpbrk - Write a function that gets the length of a prefix substring.
 * @s: Pointer
 * @accept: Pointer
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
