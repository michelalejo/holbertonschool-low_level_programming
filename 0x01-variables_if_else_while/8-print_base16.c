#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;
	char n;

	for (m = 0; m < 10; m++)
		putchar(m % 10 + '0');
	for (n = 'a'; n < 'g'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
