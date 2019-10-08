#include "holberton.h"
/**
 * _strpbrk - Write a function that gets the length of a prefix substring.
 * @s: Pointer
 * @accept: Pointer
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i] < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

