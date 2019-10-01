#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - text to be print in reverse.
 * @s: s have the string to print.
 * void: void
 */
void rev_string(char *s)
{
	int b, i;
	char temp;

	i = 0;
	b = 0;
	for (; s[b] != '\0';)
	{
		b++;
	}
	b = b - 1;
	for (i = 0; i <= b; i++)
	{
		temp = s[i];
		s[i] = s[b];
		s[b] = temp;
		b = b - 1;
	}
}
