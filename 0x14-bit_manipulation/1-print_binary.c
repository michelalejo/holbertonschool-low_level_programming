#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * print_binary - Function that prints the binary representation.
 *@n: Binary numbers.
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int f = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	f = f << 63;
	for (; !(n & f); )
	{
		f = f >> 1;
	}

	for (; f; )
	{
		if ((n & f) != 0)
		{
			_putchar('1');
			f = f >> 1;
		}
		else
		{
			_putchar('0');
			f = f >> 1;
		}
	}
}
