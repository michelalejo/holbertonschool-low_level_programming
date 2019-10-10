#include "holberton.h"
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: Takes in an integer
 * Return: Starting number and n to compare
 */
int _sqrt_recursion(int n)
{
	return (find(1, n));
}
/**
 * find - Find square root.
 * @x: An integer.
 * @y: An integer.
 * Return: Return x compared with y.
 */
int find(int x, int y)
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
		return (find(x += 1, y));
	}
}
