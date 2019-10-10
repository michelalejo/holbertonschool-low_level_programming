#include "holberton.h"

/**
 * is_prime_number - function to calculate if n is prime.
 * @n: Check if prime
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_find1(n, 2));
}

/**
 * _find1 - function that help to find a prime number.
 * @n: number to be calculate
 * @find2: Help find if its prime
 * Return: 1 if prime; 0 if not prime.
 */

int _find1(int n, int find2)
{
	if (find2 <= (n - 1))
	{
		if (n % find2 == 0)
		{
			return (0);
		}
		return (_find1(n, find2 + 1));
	}
	return (1);
}
