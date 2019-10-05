#include <stdio.h>
#include "holberton.h"
/**
 *main - print fibo
 *
 *Return: 0
 */

int main(void)
{
	long i, j, xD, alv;

	i = 0;
	j = 1;
	for (alv = 0; alv < 50; alv++)
	{
		xD = i + j;
		i = j;
		j = xD;
		if (alv != 49)
			printf("%ld, ", xD);
		else
			printf("%ld\n", xD);
	}
	return (0);
}
