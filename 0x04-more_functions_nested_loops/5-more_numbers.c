#include "main.h"

/**
 * more_numbers - print the numbers, from 0 to 14, followed by a new line
 * 10 times
 * No arguments
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k;

	for (k = 0; k < 10; k++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
		for (j = '0'; j <= '4'; j++)
		{
			_putchar('1');
			_putchar(j);
		}
		_putchar('\n');
	}
}
