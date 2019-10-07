#include "holberton.h"
/**
 * _memcpy - Write a function that copies memory area.
 * @dest: pointer
 * @src: pointer
 * @n: n
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, f = n;
	char *t = (char *)dest;
	char *s = (char *)src;

	for (i = 0; i < f; i++)
		t[i] = s[i];
	return (dest);
}
