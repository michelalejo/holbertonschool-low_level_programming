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
	int i, j, k;


	for (i = 0; dest[i] != '\0'; i++)
		;
	for (k = 0; src[k] != '\0'; k++)
		;
	if (n > k)
	{
		n = k;
	}
	for (j = 0; j < n;)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
