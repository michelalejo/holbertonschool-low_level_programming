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
