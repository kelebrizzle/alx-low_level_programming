#include "main.h"
/**
* jack_bauer - Prints minutes of Jack's day.
* Return: Always 0
*/
void jack_bauer(void)
{
	int x, y;

	for (x = 0 ; x <= 24 ; x++)
	{
	for (y = 0 ; y <= 59 ; y++)
	{
	if (x == 24)
	{
	break;
	}
	_putchar(x / 10 + '0');
	_putchar(x % 10 + '0');
	_putchar(':');
	_putchar(y / 10 + '0');
	_putchar(y % 10 + '0');
	_putchar('\n');
	}
	}
}
