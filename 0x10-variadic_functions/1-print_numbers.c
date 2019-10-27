#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
        va_list s;
        unsigned int i;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(s, int));
		if (i != n -1 && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(s);
}
