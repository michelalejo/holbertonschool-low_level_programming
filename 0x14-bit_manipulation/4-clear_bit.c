#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * clear_bit - Function that sets the value of a bit to 0 given index.
 *@n: N.
 *@index: Index.
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = *n & (~(1 << index));
	return (1);
}
