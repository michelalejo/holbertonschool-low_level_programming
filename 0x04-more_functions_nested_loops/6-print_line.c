#include "holberton.h"
/**
 * print_line - function that prints a straight line
 * @n: takes in an integer
 */
void print_line(int n)
{
	char r = '_';
	int f = n;

	if (f > 0)
	{
		for (; f > 0; f--)
			_putchar(r);
	}
	_putchar('\n');
}
