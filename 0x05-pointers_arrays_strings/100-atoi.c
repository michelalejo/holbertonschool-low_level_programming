#include "holberton.h"
/**
 * _atoi - this function converts a string to integer
* a blank line
*@s: the string for convert to integer
* Description: this funtion converts a string to integer)?
* section header: the header of this function is holberton.h)*
* Return: this funtion returns the result
*/
int _atoi(char *s)
{
	int c, sign;
	unsigned int n;

	sign = 1;
	c = 0;
	n = 0;


	while ((s[c] < '0' || s[c] > '9') && (s[c] != '\0'))
	{
		if (s[c] == '-')
			sign *= -1;
		c++;
	}
	while ((s[c] >= '0') && (s[c] <= '9'))
	{
		n = n * 10 + (s[c] - '0');
		c++;
	}
	return (n * sign);
}
