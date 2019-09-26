#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
		if (c > 'A' && c >= 'Z')
		{
			return(0);
		}
		else
			return (1);
}
