#include "holberton.h"
/**                                                                                                                       
 * leet - encodes string 1337                                                                                              * @p: pointer to array                                                                                                   
 * Description: encodes a string to 1337                                                                                  
 * Returns: pointer to an array                                                                                            */
char *leet(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] == 'a' || p[i] == 'A')
		{
			p[i] = '4';
		}
		else if (p[i] == 'e' || p[i] == 'E')
		{
			p[i] = '3';
		}
		else if (p[i] == 'o' || p[i] == 'O')
		{
			p[i] = '0';
		}
		else if (p[i] == 't' || p[i] == 'T')
		{
			p[i] = '7';
		}
		else if (p[i] == 'l' || p[i] == 'L')
		{
			p[i] = '1';
		}
	}
	return (p);
}
#include "holberton.h"
/**
 * leet - encodes a string to 1337
 * @s: takes in a string
 * Return: s, the string
 */
char *leet(char *s)
{
	int i, j;

	char *s1 = "aeotlAEOTL";
	char *s2 = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s[i] == s1[j])
				s[i] = s2[j];
		}
	}
	return (s);
