#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;

	if (n < 2)
	{
		_putchar(n + 48);
		return;
	}
	num = n & 1;
	n >>= 1;
	print_binary(n);
	_putchar(num + 48);
}
