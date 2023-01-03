#include "main.h"
#include <string.h>

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
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
			break;
	}
	if (i == len)
		return (NULL);
	else
		return (s + i);
}
