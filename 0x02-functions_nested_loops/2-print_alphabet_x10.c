#include "main.h"
/**
* print_alphabet_x10 - Prints letters
* Return: 0
*/
void print_alphabet_x10(void)
{
	int x;

	x = 1;
	while (x <= 10)
	{
	char y;

	y = 'a';
	while (y <= 'z')
	{
	_putchar(y);
	y++;
	}
	_putchar('\n');
	x++;
	}
}
