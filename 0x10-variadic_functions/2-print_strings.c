#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Function that prints strings, followed by a new line.
 *@n: Number of integers passed to the function.
 *@separator: String to be printed between numbers.
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	char *f;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		f = va_arg(l, char*);

		if (f == NULL)
			printf("(nil)");

		else if (i < n - 1 && separator != NULL)
			printf("%s%s", f, separator);

		else
			printf("%s", f);
	}
	printf("\n");
	va_end(l);
}
