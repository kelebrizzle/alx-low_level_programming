#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;

for (a = 0; a < 10; a++)
{
	putchar((a % 10) + '0');
}
putchar('\n');
return (0);
}
