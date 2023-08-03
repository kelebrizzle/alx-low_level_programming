#include "main.h"
#include <stddef.h>

/**
 * exp - finds the exponient of a number
 * @i: number
 * @j: number
 * Return: result
*/

int exp(unsigned int i, unsigned int j)
{
	unsigned int z, n;

	n = 1;
	for (z = 0; z < j; z++)
	{
		n *= i;
	}
	return (n);
}
/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: binary character array
 * Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j, z;

	i = 0;
	j = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if ((b[i] != 48) && (b[i] != 49))
		{
			return (0);
		}
		i++;
	}

	z = 0;
	while (i > 0)
	{
		i--;
		if (b[i] == 49)
		{
			j = j + (1 * exp(2, z));
		}
		z++;
	}
	return (j);
}
