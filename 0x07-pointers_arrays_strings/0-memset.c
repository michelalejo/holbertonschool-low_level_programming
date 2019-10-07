#include "holberton.h"
/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: pointer
 * @b: char
 * @n: int
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i, f = n;
	char *a = s;

	for (i = 0; i < f; i++)
		a[i] = b;
	return (s);
}
