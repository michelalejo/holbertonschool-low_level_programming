#include <stdio.h>
/**
 * main - returns (0)
 * @argc: int argc
 * @argv: char argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
