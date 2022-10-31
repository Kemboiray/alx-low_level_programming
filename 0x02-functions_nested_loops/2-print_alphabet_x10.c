#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10x, then newline
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;
	while (i < 10)
	{
		for (c = 97; c < 123; c++)
		{
			_putchar(c);
		}
		_putchar(10);
		i++;
	}
}
