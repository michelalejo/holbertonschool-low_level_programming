#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - text to be print in reverse.
 * @s: s have the string to print.
 * void: void
 */
void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	a--;	
	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
