#include "holberton.h"
/**
 * reverse_array - reverses an array of integers
 * @a: takes in an array
 * @n: takes in an integer
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < n / 2; j--, i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
