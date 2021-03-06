#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - Function that searches for a value in an array of integers.
 * @array: Array of integers to be iterate.
 * @size: The number of elements in array.
 * @value: The value tha has to be search.
 * Return: The position of the value in the array or -1 if is not found.
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; (size_t)i <= size - 1; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
