#include "holberton.h"
/**
 * print_line - function that prints a straight line
 * @n: takes in an integer
 */
void print_square(int size)
{
	char r = '#';
	int f = size;

	if (f < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; f > 0; f--)
			_putchar(r);
	}
	_putchar('\n');
}
