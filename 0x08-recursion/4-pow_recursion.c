#include "holberton.h"
/**
 * _pow_recursion - Function to returns the value of x raised to the power of y
 * @x: Pointer with the strings.
 * @y: Pointer with the strings.
 * Return: Returns the factorial of a given number.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
