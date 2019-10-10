#include "holberton.h"
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: takes in an integer
 * Return: a starting number and n to compare
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion1(1, n));
}
/**
 * _sqrt_recursion1 - Find square root
 * @x: takes in an integer
 * @y: takes in an integer
 * Return: return x compared to y
 */
int _sqrt_recursion1(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion1(x += 1, y));
	}
}
