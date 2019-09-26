#include "holberton.h"
/**
 * print_square - prints perfect square
 * @size: size to print
 */
void print_square(int size)
{
	char r = '#';
	int f, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (f = size; f > 0; f--)
		{
			for (b = size; b > 0; b--)
			{
				_putchar(r);
			}
			_putchar('\n');
		}
	}
}
