#include "main.h"

/**
 * print_diagonal - draw a straight line in the terminal
 * @n: integer argument passed from calling function
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
		_putchar('\n');
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
	}
		_putchar('\n');
}
