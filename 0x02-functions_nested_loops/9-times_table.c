#include "main.h"
/**
* times_table - Prints 9 timestable.
* Return: 0
*/
void times_table(void)
{
	int x, y, z;

	x = 0;
	while (x <= 9)
	{
	y = 0;
	while (y <= 9)
	{
	z = x * y;
	if (y != 0)
	{
	_putchar(',');
	_putchar(' ');
	}
	if ((z / 10) == 0 && y != 0)
	{
	_putchar(' ');
	}
	if ((z / 10) != 0)
	{
	_putchar(z / 10 + '0');
	}
	_putchar(z % 10 + '0');
	y++;
	}
	x++;
	_putchar('\n');
	}
}

