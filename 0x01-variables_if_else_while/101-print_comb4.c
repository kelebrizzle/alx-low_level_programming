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
int b;
int c;

for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			if (b > a && c > b)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');
				if ((a + b + c) != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
