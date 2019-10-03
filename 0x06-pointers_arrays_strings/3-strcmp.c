#include "holberton.h"
/**
 * _strncpy - simulate the way strncpy works.
 * @src: q = to the s1
 * @dest: p = to the s2
 * @n: the number of leters it have to print
 * Return: dest.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
     
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1 != s2)
			return (s1[i] - s2[i]);
	return (0);
        
}
