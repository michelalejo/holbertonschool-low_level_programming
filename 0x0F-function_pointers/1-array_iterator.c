#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - Function that given as parameter of each element in array.
 *@array: Array.
 *@size: Name to be print.
 *@action: Funtion.
 *Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, a;

	a = size;
	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < a; i++)
		action(array[i]);
}
