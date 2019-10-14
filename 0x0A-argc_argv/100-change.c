#include <stdio.h>
#include <stdlib.h>
/**
 * main - Returns 0.
 * @argc: Argc.
 * @argv: Argv.
 * Return: Returns 0.
 */
int main(int argc, char *argv[])
{
	int i, j, t, xD, alv;
	int f[] = {25, 10, 5, 2, 1};

	alv = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		xD = atoi(argv[1]);
		t = xD;
		if (t < 0)
		{
			printf("0\n");
			return (0);
		}
		j = 0;
		for (i = 0; i < xD;)
		{
			if ((t - f[j]) >= 0)
			{
				t = t - f[j];
				i = i + f[j];
				alv++;
			}
			else
			{
				j++;
			}
		}
	}
	printf("%d\n", alv);
	return (0);
}
