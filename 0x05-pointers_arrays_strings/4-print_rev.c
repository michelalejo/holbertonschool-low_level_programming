#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - text to be print in reverse.
 * @s: s have the string to print.
 * void: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = (i - 1) / 2;
	}
	else
	{
		i = i / 2;
	}
	for (i = i + 1; str[i] != '\0';)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
