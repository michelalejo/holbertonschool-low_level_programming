#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - Function that given as parameter of each element in array.
 *@array: Array.
 *@size: Name to be print.
 *@cmp: Funtion.
 *Return: If size > -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, a;

	a = size;
	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < a; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
