#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: integer value passed from main
 * Return: 1 if alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	int test;

	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		test = 1;
	}
	else
	{
		test = 0;
	}
	return (test);
}
