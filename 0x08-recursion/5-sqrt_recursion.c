#include "holberton.h"
/**
 * _sqrt_recursion - calculate the sqare root of a number
 * @n: integer
 * Return: result of the sqare root of n
 */
int _sqrt_recursion(int n)
{
	int result = 0;
	result = _find(n, 0);
	return (result);
}

/**
 * _find - calculate the sqare root of a number
 * @n: integer
 * @factor:integer
 * Return: result of the sqare root of n
 */
int _find(int n, int factor)
{
	int result = 0;
	if (factor * factor > n)
		return (-1);
	if (factor * factor == n)
		return (factor);
	result = _find(n, factor + 1);
	return (result);
}
