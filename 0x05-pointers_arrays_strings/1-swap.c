#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: take an pointer
 * @b: take an pointer
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
