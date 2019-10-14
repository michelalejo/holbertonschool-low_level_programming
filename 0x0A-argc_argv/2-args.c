#include <stdio.h>
/**
 * main - Program that prints the number of arguments passed into it.
 * @argc: Number of arguments.
 * @argv: Array with arguments in memory.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
