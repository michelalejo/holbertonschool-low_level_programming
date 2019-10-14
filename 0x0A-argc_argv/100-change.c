#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns (0)
 * @argc: int argc
 * @argv: char argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, total, fijo, count;
	int dev[] = {25, 10, 5, 2, 1};

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		fijo = atoi(argv[1]);
		total = fijo;
		if (total < 0)
		{
			printf("0\n");
			return (0);
		}
		j = 0;
		for (i = 0; i < fijo;)
		{
			if ((total - dev[j]) >= 0)
			{
				total = total - dev[j];
				i = i + dev[j];
				count++;
			}
			else
			{
				j++;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}
