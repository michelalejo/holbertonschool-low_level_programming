#include "holberton.h"
/**
 * _strncpy - simulate the way strncpy works.
 * @src: q = to the s1
 * @dest: p = to the s2
 * @n: the number of leters it have to print
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
