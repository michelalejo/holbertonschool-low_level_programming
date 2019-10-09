#include "holberton.h"
/**
 * _puts_recursion - Function that prints a string, followed by a new line.
 * @s: Pointer with the strings.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

}
