#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * flip_bits - Function that returns the n of bits need to get
 * from one number to another.
 *@n: Long int.
 *@m: Long int.
 * Return: 1 or -1.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	if (!(n == m))
	{
		for (; !(n == m); )
		{
			if (n == 0 && m == 0)
			{
				break;
			}

			if (!((n & 1) == (m & 1)))
			{
				i++;
			}

			n = n >> 1;
			m = m >> 1;
		}
	}
	return (i);
}
