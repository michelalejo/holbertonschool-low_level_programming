#include "holberton.h"
/**
 * print_square - prints perfect square
 * @size: size to print
 */
void print_diagonal(int n)
{
	char r = 92;
	int f, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (f = 1; f <= n; f++)
		{
			for (b = 2; b <= f; b++)
			{
				_putchar(32);
			}
			_putchar(r);
			_putchar('\n');
		}
	}
}
