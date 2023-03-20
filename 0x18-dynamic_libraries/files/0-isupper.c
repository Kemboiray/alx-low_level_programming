#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: integer argument passed from calling funcion
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
