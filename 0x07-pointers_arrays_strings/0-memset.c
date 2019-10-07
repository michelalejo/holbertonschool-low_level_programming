#include "holberton.h"
/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: pointer
 * @b: char
 * @n: lenght
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for(i=0; i<n; i++)
	{
		s[i]=b;
	}
}
