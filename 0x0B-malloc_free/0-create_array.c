#include "main.h"
#include <stdlib.h>

/**
 * create_array - initialises an array with char c
 * @size: array size
 * @c: character
 *
 * Return: pointer to array (success), NULL (size == 0) or error
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	s[0] = c;
	return (s);
}
