#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 *op_add - SUM.
 *@a: A.
 *@b: B.
 *Return: A+B.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - SUB.
 *@a: A.
 *@b: B.
 *Return: A-B.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - MULT.
 *@a: A.
 *@b: B.
 *Return: A*B.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - DIV.
 *@a: A.
 *@b: B.
 *Return: A/B.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - MOD.
 *@a: A.
 *@b: B.
 *Return: A % B.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
