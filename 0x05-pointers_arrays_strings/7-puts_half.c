#include "holberton.h"
#include <stdio.h>
/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: char str
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	for (; str[i] != '\0';)
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
