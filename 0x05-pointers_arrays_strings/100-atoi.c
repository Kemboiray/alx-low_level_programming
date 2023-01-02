#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to string
 *
 * Return: integer conversion, or 0 if no integers are found in given string
 */
int _atoi(char *s)
{
	int i, count = 0, minus = 0, digit, value, retval = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 47 && s[i] < 58)
			count += 1;
		if (s[i + 1] < 48 || s[i + 1] > 57)
			break;
	}
	if (count > 0)
	{
		for (i = 0; s[i]; i++)
		{
			if (s[i] == '-')
				minus += 1;
			if (s[i] > 47 && s[i] < 58)
				break;
		}
		for (i = 0; s[i]; i++)
		{
			if (s[i] > 47 && s[i] < 58)
			{
				digit = s[i] - 48;
				value = digit * 10 ^ (count - 1);
				retval += value;
				count -= 1;
			}
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
		if (minus % 2 != 0)
			retval *= -1;
	}
	return (retval);
}
