#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string to be parsed
 * @c: character to be located
 *
 * Return: pointer to located character's location, or NULL if character is
 * missing
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			break;
	}
	return (s + i);
}
