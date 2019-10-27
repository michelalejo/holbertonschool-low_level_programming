#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Function that prints strings, followed by a new line.
 *@n: Number of integers passed to the function.
 *@separator: String to be printed between numbers.
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list l;
	unsigned int i, j;
	char *x;

	i = 0;
	j = 1;
	while (format)
	{
		va_start(l, format);
		while (*(format + i))
		{
			j = 1;
			switch (*(format + i))
			{
			case 'c':
				printf("%c", va_arg(l, int));
				break;
			case 'i':
				printf("%d", va_arg(l, int));
				break;
			case 'f':
				printf("%f", va_arg(l, double));
				break;
			case 's':
				x = va_arg(l, char *);
				if (x == NULL)
					x = "(nil)";
				printf("%s", x);
				break;
			default:
				j = 0;
				break;
			}
			if (*(format + i + 1) && j)
				printf(", ");
			i++;
		}
		va_end(l);
		break;
	}
	printf("\n");
}
