#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
		putchar(f);
	for (f = 'A'; f <= 'Z'; f++)
		putchar(f);
	putchar('\n');
	return (0);
}
