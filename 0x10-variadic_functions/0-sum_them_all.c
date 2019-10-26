#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - Function that returns the sum of all its parameters.
 *@n: Number to be sum.
 *Return: J.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int i, j = 0;

	if (n == 0)
		return (0);
	va_start(s, n);
	for (i = 0; i < n; i++)
		j += va_arg(s, unsigned int);
	va_end(s);
	return (j);
}
