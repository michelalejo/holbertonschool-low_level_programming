#include "holberton.h"
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: Pointer with the strings.
 * Return: Returns the squar of n.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion1(1, n));
}
/**
* _sqrt_recursion1 - Find squar.
* @x: Integer.
* @y: Integer.
* Return: Returns the factorial of a given number.
*/
int _sqrt_recursion1(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x < y)
	{
		return (-1);
	}
	else
		return (_sqrt_recursion1(x += 1, y));
}
