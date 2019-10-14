#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns (0)
 * @argc: Argc
 * @argv: Argv.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, n, xD;

	xD = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[i]);
		xD = xD + n;
	}
	printf("%d\n", xD);
	return (0);
}
