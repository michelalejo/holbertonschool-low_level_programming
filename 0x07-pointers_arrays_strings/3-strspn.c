#include "holberton.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: Pointer
 * @accept: Pointer
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (k);
}
