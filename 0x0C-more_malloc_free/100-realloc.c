#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - Function that give new space of memory.
 * @ptr: Oldpointer that will be change.
 * @new_size: New size.
 * @old_size: Old size.
 * Return: Return NULL or the new pointer to the space of memory.
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		_memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}

/**
 * _memcpy - Function the copy momery from source to destiny - n bytes.
 * @dest: Dest for the data.
 * @src: Source of the data to be copy.
 * @n: N bytes to be copy.
 * Return: Copy of the old momery on new pointer.
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{

		dest[i] = src[i];
	}

	return (dest);
}
