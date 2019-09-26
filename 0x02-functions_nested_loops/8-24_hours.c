#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day 00:00 to 23:59
 * @void - no argument
 */
void jack_bauer(void)
{
	int dsa, asd;

	for (dsa = 0; dsa < 24; dsa++)
	{
		for (asd = 0; asd < 60; asd++)
		{
			_putchar(dsa / 10 + '0');
			_putchar(dsa % 10 + '0');
			_putchar(':');
			_putchar(asd / 10 + '0');
			_putchar(asd % 10 + '0');
			_putchar('\n');
		}
	}
}
