#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: take an pointer
 * @b: take an pointer
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
