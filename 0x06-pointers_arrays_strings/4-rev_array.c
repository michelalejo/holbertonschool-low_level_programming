#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: int a
 * @n: int n
 */
void reverse_array(int *a, int n)
{
	int i;
	char temp;

	i = 0;
	n--;
	for (i = 0; i < a[n]; i++)
	{
		temp = a[i];
		a[i] = *(a + n);
		*(a + n) = temp;
		n--;
	}
}
