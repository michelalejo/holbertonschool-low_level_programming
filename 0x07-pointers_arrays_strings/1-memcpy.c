#include "holberton.h"
/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: pointer
 * @b: char
 * @n: int
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, f = n;
	char *t = (char*)dest;
	char *s = (char*)src;

       	for( i = 0; i < f; i++)
		t[i] = s[i];
	return (dest);
}
