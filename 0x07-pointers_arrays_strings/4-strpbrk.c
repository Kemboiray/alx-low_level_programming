#include "main.h"

/**
 * _strpbrk - searches string pointed to by s for any of the bytes in the
 * string pointed to by accept
 * @s: pointer to first string
 * @accept: pointer to second string
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (accept[j] == s[i])
			break;
	}
	return (s + i);
}
