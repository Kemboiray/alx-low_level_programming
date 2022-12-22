#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print last half of a string, then a newline
 * @str: string constant
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, half, i;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		half = len / 2;
		for (i = half; str[i]; i++)
			_putchar(str[i]);
		_putchar('\0');
		_putchar('\n');
	}
	else
	{
		half = (len - 1) / 2;
		for (i = half + 1; str[i]; i++)
			_putchar(str[i]);
		_putchar('\0');
		_putchar('\n');
	}
}
