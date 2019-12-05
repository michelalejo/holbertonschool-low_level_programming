#include "holberton.h"
/**
 * print_number - Funtion to Print Numbers.
 * @n: Numbers to be Printed.
 * Return: Void.
 */
void print_number(int n)
{
	int i = 0, twod = 1;

	if (n < 0)
		_putchar('-');

	while ((n / twod) > 9 || (n / twod) < -9)
		twod *= 10;

	for (i = twod; i >= 1 || i <= -1; i /= 10)
	{
		if (n < 0)
			n *= -1;
		_putchar((n / i) % 10 + '0');
	}
}
