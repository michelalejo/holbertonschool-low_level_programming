#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - Function that prints a name.
 *@f: Funtion.
 *@name: Name to be print.
 *Return: Viod.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
