#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int i, j = 0;

	if (n == 0)
		return (0);
	va_start (s, n);
	for (i = 0; i < n; i++)
		j += va_arg (s, unsigned int);
	va_end (s);
	return (j);
}
