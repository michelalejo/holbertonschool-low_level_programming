#include "holberton.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/

int main(void)
{
	char Holberton[] = "Holberton";
	int a;

	for (a = 0; a < 9; a++)
	{
		_putchar(Holberton[a]);
	}
	_putchar('\n');
	return (0);
}
