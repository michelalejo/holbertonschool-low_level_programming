#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - text to be print in reverse.
 * @s: s have the string to print.
 * void: void
 */
void print_rev(char *s)
{
	int a, b, temp;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	a--;
	for (b = 0; b <= a; b++)
		temp = b;
		b = a;
		a = temp;
}
