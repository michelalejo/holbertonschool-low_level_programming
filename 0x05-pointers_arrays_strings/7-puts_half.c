#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - Write a function that prints every other character of a string
 * @str: take an pointer
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
