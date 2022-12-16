#include "main.h"

/**
 * print_most_numbers - print the numbers, from 0 to 9, excluding 2 and 4
 * followed by a new line
 * No arguments
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
