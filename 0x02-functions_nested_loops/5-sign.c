#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: integer argument passed from main
 * Return: 1 if positive, 0 if 0, and -1 if negative
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		_putchar(43);
		test = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		test = 0;
	}
	else
	{
		_putchar(45);
		test = -1;
	}
	return (test)
}
