#include "holberton.h"

/**
 * print_number - Prints an integer.
 * @n: the integer.
 */

void print_number(int n)
{
	if (n > 9 || n < -9)
	{
		print_number(n / 10);
		if (n < 0)
			n = (n % 10) * -1;
		_putchar ((n % 10) + '0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		_putchar(n + '0');
	}
}
