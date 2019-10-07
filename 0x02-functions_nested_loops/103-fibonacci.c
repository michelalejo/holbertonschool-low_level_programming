#include <stdio.h>
/**
 * main - function that prints out the sum of even value fibo
 * numbers up to 4000000
 * Return: 0
 */

int main(void)
{
	long i, j, even_sum, current_sum, max;

	i = 1;
	j = 2;
	max = 4000000;
	even_sum = 0;
	current_sum = 0;
	while (i < max && j < max)
	{
		if ((j % 2) == 0)
			even_sum += j;
		current_sum = i + j;
		i = j;
		j = current_sum;
	}
	printf("%ld\n", even_sum);
	return (0);
}
