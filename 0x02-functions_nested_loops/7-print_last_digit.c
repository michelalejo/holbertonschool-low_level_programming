#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit
 * @n: takes in an integer
 * Return: returns output
 */
int print_last_digit(int n)
{
	int b = n % 10;

	if (n < 0)
		b = b * -1;
	_putchar(b + '0');
	return (b);
}
