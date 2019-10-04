#include"holberton.h"
/**
 * print_number - prints an integer.
 * @n: int n
 * Return: Always 0.
 */
void print_number(int n)
{
	int i, a;

	a = 1;
	i = n;
	if (n < 0)
	{
		a = -1;
		_putchar('-');
	}
	while (i > 9 || i < -9)
	{
		i = i / 10;
		a = a * 10;
	}
	while (a > 9 || a < -9)
	{
		_putchar((n / a) % 10 + '0');
		a = a / 10;
	}
	if (n < 0)
		_putchar((n % 10)  * -1 + '0');
	else
		_putchar(n % 10 + '0');
}
