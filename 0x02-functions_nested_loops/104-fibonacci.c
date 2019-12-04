#include <stdio.h>
#include "holberton.h"
/**
 *main - print fibo
 *
 *Return: 0
 */

int main(void)
{
	long i, j, xD, alv, max;

	max = 98;
	i = 0;
	j = 1;
	for (alv = 0; alv < max; alv++)
	{
		xD = i + j;
		i = j;
		j = xD;
		if (alv != max)
			printf("%ld, ", xD);
		else
			printf("%ld\n", xD);
	}
	return (0);
}
