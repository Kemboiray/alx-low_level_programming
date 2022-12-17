#include "main.h"

/**
 * print_diagonal - draw a straight line in the terminal
 * @n: integer argument passed from calling function
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			if (i == 0)
			{
				_putchar(92);
				_putchar('\n');
			}
			else
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar(92);
				_putchar('\n');
			}
			i++;
		}
	}
}
