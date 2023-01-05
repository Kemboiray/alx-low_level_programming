#include "main.h"

/**
 * _pow_recursion - returns value of x raised to y
 * @x: base
 * @y: exponent
 *
 * Return: x**y if successful, -1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 2)
		return (x * x);
	return (x * _pow_recursion(x, y - 1));
}
