#include "main.h"

/**
 * puts2 - print every other character of a string,
 * starting with the first character, followed by a new line, to stdout
 *
 * @str: string constant
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
