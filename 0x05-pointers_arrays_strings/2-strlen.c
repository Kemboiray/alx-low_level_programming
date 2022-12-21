#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: pointer to a char
 * Return: length of string.
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s; count++, *s++)
		;
	return (count);
}
