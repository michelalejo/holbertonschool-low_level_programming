#include "holberton.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: Pointer with the strings.
 * return: the length of the string to the funtion.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		return (1 + _strlen_recursion(s + 1));
}
