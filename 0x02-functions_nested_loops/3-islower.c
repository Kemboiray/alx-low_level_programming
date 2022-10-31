#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: integer value passed from main
 * Return: 1 if true, 0 otherwise
 */
int _islower(int c)
{
	int test;

	if (c > 96 && c < 123)
	{
		test = 1;
	}
	else
	{
		test = 0;
	}
	return (test);
}
