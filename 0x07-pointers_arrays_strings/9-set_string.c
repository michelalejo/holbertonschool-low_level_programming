#include "holberton.h"
#include <stdio.h>
/**
 * set_string - Function that sets the value of a pointer to a char.
 * @s: Double pointer.
 * @to: The value to be point.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
