#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to string being changed
 *
 * Return: str.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
	}
	return (str);
}