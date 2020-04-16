#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 *
 *
 *
 *
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
