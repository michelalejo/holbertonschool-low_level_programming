#include "holberton.h"
/**
 * print_alphabet - prints alphabet in lowercase
 * @void: no argument
 **/
void print_alphabet(void)
{
	char a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
}
