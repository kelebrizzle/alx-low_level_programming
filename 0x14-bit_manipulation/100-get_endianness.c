#include "main.h"

/**
 * get_endianness - checks if multibyte data is the endianess
 * Return: 1 if little endian, 0 if big-endian
*/

int get_endianness(void)
{
	int i = 1;
	char *endian = (char *)&i;

	if (*endian == 1)
	{
		return (1);
	}
	return (0);
}
