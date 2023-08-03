#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: integer
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	i <<= index;
	*n = *n | i;

	return (1);
}
