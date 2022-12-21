#include "main.h"

/**
 * print_rev - print a string, in reverse, followed by a new line
 *
 * @s: string constant
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i]; i++)
		;
	for (j = (i - 1); j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
