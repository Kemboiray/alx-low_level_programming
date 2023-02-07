#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string of 0 and 1 chars.
 *
 * Return: converted number or 0 (one or more characters in source
 * string != '1' | '0', or b == NULL).
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int *mul, i, j, len, _mul = 1, sum = 0;

	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);
	mul = malloc(len * sizeof(len));
	if (mul == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		for (j = i + 1; b[j]; j++)
			_mul *= 2;
		mul[i] = _mul;
		_mul = 1;
		sum += ((unsigned int) (b[i] - 48)) * mul[i];
	}

	return (sum);
}
