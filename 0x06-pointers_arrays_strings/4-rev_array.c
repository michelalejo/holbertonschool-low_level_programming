#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: int a
 * @n: int n
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
