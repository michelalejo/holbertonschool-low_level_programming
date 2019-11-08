#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * get_bit - Funtion that return the value of a given index..
 *@n: N.
 *@index: Index.
 * Return: Index or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	n = n >> index & 1;
	if (n != 0)
		return (1);
	return (0);
}
