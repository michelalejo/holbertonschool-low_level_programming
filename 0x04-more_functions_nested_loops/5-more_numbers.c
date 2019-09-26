#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers from 0-14
 * @void: no argument
 */
void more_numbers(void)
{
	int i, d;

	for (i = 0; i < 10; i++)
	{
		for (d = 0; d < 15; d++)
		{
			if (d > 9)
			{
				putchar(d / 10 + '0');
			}
			putchar(d % 10 + '0');
		}
		putchar('\n');
	}
}
