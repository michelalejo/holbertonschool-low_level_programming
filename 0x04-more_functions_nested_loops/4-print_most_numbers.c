#include "holberton.h"
/**
 * print_most_numbers - prints the # (01356789) followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
