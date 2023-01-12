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
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		s[i] = c;
	s[i] = '\0';
	return (s);
}
