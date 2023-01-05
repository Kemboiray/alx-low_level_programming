#include "main.h"
#include "_putchar.c"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
/*
*int main(void)
*{
*	char *str = "Hello world!";
*
*	_puts_recursion(str);
*	return (0);
*}
*/
