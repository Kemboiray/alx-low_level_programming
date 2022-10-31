#include "main.h"
/**
 * print_last_digit - return value of last digit
 * @n: int type variable passed from calling function
 * Return: Last digit of formal parameter
 */
int print_last_digit(int n)
{
	int r;

	r = _abs(n % 10);
	_putchar('0' + r);
	return (r);
}
