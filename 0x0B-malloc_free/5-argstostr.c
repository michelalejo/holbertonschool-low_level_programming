#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - Function that concatenates all the arguments of the program.
 * @ac: Count.
 * @av: Vector.
 * Return: Return an argument.
 */
char *argstostr(int ac, char **av)
{
	char *p, *q;
	int i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++, k++)
	{
		j = 0;
		while (*(*(av + i) + j) != '\0')
		{
			j++;
			k++;
		}
	}
	k++;
	p = malloc(k * sizeof(char));
	if (p == NULL)
		return (NULL);
	q = p;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*p = av[i][j];
			p++;
		}
		*p = '\n';
		p++;
	}
	return (q);
}
