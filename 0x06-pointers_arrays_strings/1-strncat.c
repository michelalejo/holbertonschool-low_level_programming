#include "holberton.h"
/**
 * _strncat - simulate the way strcat works.
 * @src: q = to the s1
 * @dest: p = to the s2
 * @n: the number of leters it have to print
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[i] != '\0'; i++, j++)
		j < n ? dest[i] = src[j] : j;

	return (dest);
}
