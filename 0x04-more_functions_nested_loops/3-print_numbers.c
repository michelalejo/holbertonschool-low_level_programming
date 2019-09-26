#include "holberton.h"
/**
 * print_most_numbers - print all numbers except for 2 or 4
 * @void: no argument
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
