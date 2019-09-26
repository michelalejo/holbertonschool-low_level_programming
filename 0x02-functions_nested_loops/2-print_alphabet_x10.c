#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase x10
 * @void - no argument
 */
void print_alphabet_x10(void)
{
	char i, a;
	{
		for (i = 0; i <= 9; i++)
		{
			for (a = 'a'; a <= 'z'; a++)
				_putchar(a);
			_putchar('\n');
		}
	}
}
