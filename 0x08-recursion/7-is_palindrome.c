#include "holberton.h"
/**
 * is_palindrome - returns 1 if is palindrome and 0 if not.
 * @s: takes in a string
 * Return: Return if is palindrome.
 */
int is_palindrome(char *s)
{
	int alv;

	alv = xD(s);
	if (alv <= 1)
		return (1);
	return (recursion1(s, alv));
}
/**
 * xD - string lengths
 * @s: takes in string.
 * Return: return the length of the string.
 */
int xD(char *s)
{

	if (*s == '\0')
		return (0);
	return (1 + xD(s + 1));
}
/**
 * recursion1 - checks if is a palindrome
 * @s: takes in the string
 * @l: length of
 * Return: check if is a palindrome
 */
int recursion1(char *s, int l)
{
	if (l <= 1)
	{
		return (1);
	}
	if (*s != s[l - 1])
	{
		return (0);
	}
	else
	{
		return (recursion1(s + 1, l - 2));
	}
}
