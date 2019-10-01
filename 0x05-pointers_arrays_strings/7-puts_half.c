#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - Write a function that prints every other character of a string
 * @str: take an pointer
 */
void puts_half(char *str)
{
	int a, b;

	for (b = 0; str[b] != '\0'; a++)
	{
	}
	b--;
	if (b % 2 == 0)
	{
		n = b / 2;
	}
	else
	{
		n = b + 1 / 2;
	}
	for (a = n; str[a] <= b; a++)
	{
			_putchar(str[a]);
	}
	_putchar('\n');
}
