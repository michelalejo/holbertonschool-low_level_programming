#include "holberton.h"
#include <stdio.h>
/**
 * _puts - writes a string to stdout up to but not including the null character.
 * @str: str have the string to print.
 * Return: the index of the array
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
