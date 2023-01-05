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
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}

int main(void)
{
	int x, y;

	printf("Enter base:\n");
	scanf("%d", &x);
	printf("Enter exponent:\n");
	scanf("%d", &y);
	printf("Function returned %d\n", _pow_recursion(x, y));
	return (0);
}

