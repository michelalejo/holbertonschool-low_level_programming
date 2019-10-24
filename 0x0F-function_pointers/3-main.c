#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - Main Code.
 *@argc: ARGC.
 *@argv: ARGV.
 *Return: 0.
 */
int main(int argc, char *argv[])
{
	int n, nn, g;
	int (*h)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n = atoi(argv[1]);
	nn = atoi(argv[3]);
	h = get_op_func(argv[2]);
	if (h == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	g = h(n, nn);
	printf("%d\n", g);
	return (0);
}
