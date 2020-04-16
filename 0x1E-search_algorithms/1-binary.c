#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - Function that searches for a value in a sorted array.
 * @array: Array of integers to be iterate.
 * @size: The number of elements in array.
 * @value: The value tha has to be search.
 * Return: The position of the value in the array or -1 if is not found.
 */
int binary_search(int *array, size_t size, int value)
{
	int i, tmp, start = 0, end = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d, ", *(array + i));
		}
	    printf("%d\n", *(array + i));
		tmp = (start + end) / 2;
		if (value > *(array + tmp))
			start = tmp + 1;
		else if (value < *(array + tmp))
			end = tmp - 1;
		else
			return (tmp);
	}
	return (-1);
}
