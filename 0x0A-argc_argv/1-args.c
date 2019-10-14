#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it.
 * @argc: Number of arguments.
 * @argv: Array with arguments in memory.
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	argc = argc - 1;
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}
