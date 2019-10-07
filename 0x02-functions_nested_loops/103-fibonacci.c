#include <stdio.h>
/**
 * main - function that prints out the sum of even value fibo
 * numbers up to 4000000
 * Return: 0
 */

int main(void)
{
	long i, nel, a, b, xD;

	i = 1;
	nel = 2;
	xD = 4000000;
	a = 0;
	b = 0;
	while (i < c && nel < xD)
	{
		if ((nel % 2) == 0)
			a += nel;
		b = i + nel;
		i = nel;
		nel = b;
	}
	printf("%ld\n", a);
	return (0);
}
