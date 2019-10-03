#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @p: pointer argumnet
 * Description: capitalizes all words of a string
 * Return: pointer p
 */
char *cap_string(char *p)
{
	int i;
        i = 0;
        while (p[i] != '\0')
        {
		if (i == 0 && p[i] >= 97 && p[i] <= 122)
		{
			p[i] = p[i] - 32;
		}
                if (p[i] >= 97 && p[i] <= 122
                    && (p[i-1] == 32 || p[i-1] == ','
                    || p[i-1] == ';'|| p[i-1] == '.'
                    || p[i-1] == '!'|| p[i-1] == '?'
                    || p[i-1] == '"'|| p[i-1] == '('
                    || p[i-1] == ')'|| p[i-1] == '{'
                    || p[i-1] == '}'|| p[i-1] == '\n'
                        || p[i-1] == '\t'))
                {
			p[i] = p[i] - 32;
                }
                i++;
        }
        return(p);
}
