#include <stdio.h>
<<<<<<< HEAD
<<<<<<< HEAD

/**
 * main - prints the sum of all multiples
 * of 3 or 5 below 1024
 *
 * Return: 0
=======
=======
>>>>>>> f145bc170ecdcd52a29d4953dd4441468d2cdea8
#include "holberton.h"

/**
 *main - print fibo
 *
 *Return: 0
<<<<<<< HEAD
>>>>>>> f145bc170ecdcd52a29d4953dd4441468d2cdea8
=======
>>>>>>> f145bc170ecdcd52a29d4953dd4441468d2cdea8
 */

int main(void)
{
<<<<<<< HEAD
<<<<<<< HEAD
	int i, a, b, alv;

	alv = 0;
	for (i = 0; i < 1024; i++)
	{
		a = i % 3;
		b = i % 5;
		if (a == 0 || b == 0)
		{
			alv = alv + i;
		}
	}
	printf("%d\n", alv);
=======
=======
>>>>>>> f145bc170ecdcd52a29d4953dd4441468d2cdea8
	long int loop, na, nb, nanbr;

	na = 0;
	nb = 1;
	for (loop = 0; loop < 50; loop++)
	{
		nanbr = na + nb;
		na = nb;
		nb = nanbr;
		if (loop != 49)
			printf("%ld, ", nanbr);
		else
			printf("%ld\n", nanbr);
	}
<<<<<<< HEAD
>>>>>>> f145bc170ecdcd52a29d4953dd4441468d2cdea8
=======
>>>>>>> f145bc170ecdcd52a29d4953dd4441468d2cdea8
	return (0);
}
