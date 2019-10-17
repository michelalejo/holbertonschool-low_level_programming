#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: Malloc size.
 * Return: value of mallor || 98 if is null.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
